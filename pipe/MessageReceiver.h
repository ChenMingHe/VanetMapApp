#ifndef MESSAGERECEIVER_H
#define MESSAGERECEIVER_H

#include <QObject>
#include <QUdpSocket>
#include <QSharedPointer>

namespace Pipe {
class MessageReceiver : public QObject
{
    Q_OBJECT
public:
    explicit MessageReceiver(QObject *parent = 0);
    /**
      @note ��Ҫ����run��������
      */
    void run();
    
signals:
    void newMessage(QSharedPointer<QByteArray> data);
    
private slots:
    void readPendingData();

private:
    QUdpSocket *socket;
    qint16 port;
};
}

#endif // MESSAGERECEIVER_H
