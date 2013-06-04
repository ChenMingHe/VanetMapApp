#include "MessageReceiver.h"
#include <QDebug>

using namespace Pipe;

MessageReceiver::MessageReceiver(QObject *parent) :
    QObject(parent),
    socket(new QUdpSocket(this)), port(9989)
{
}

void MessageReceiver::run()
{
    if (socket != NULL) {
        socket->close();
    }
    socket->bind(QHostAddress::LocalHost, port);
    connect(socket, SIGNAL(readyRead()),
            this, SLOT(readPendingData()));
}

void MessageReceiver::readPendingData()
{
    qDebug("recv");
    while (socket->hasPendingDatagrams()) {
        QByteArray *datagram = new QByteArray();
        QSharedPointer<QByteArray> dataP = QSharedPointer<QByteArray>(datagram);

        datagram->resize(socket->pendingDatagramSize());
        socket->readDatagram(datagram->data(), datagram->size());
        emit newMessage(dataP);
    }
}
