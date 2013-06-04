#include "MessageSender.h"
#include <QDebug>
using namespace Pipe;

MessageSender::MessageSender(QObject *parent) :
    QObject(parent), socket(new QUdpSocket(this)),
    hostAddr("127.0.0.1"), port(9989)
{
}

void MessageSender::send(const QString &receiver, const QString &type, const QString &msg)
{
    QString s = receiver + " " + type + " " + msg;
    QByteArray data(s.toAscii());
    socket->writeDatagram(data, hostAddr, port);
}
