#ifndef MESSAGESENDER_H
#define MESSAGESENDER_H

#include <QUdpSocket>
#include <QHostAddress>

namespace Pipe {
class MessageSender : public QObject
{
    Q_OBJECT
public:
    explicit MessageSender(QObject *parent = 0);

public slots:
    void send(const QString &receiver,
              const QString &type,
              const QString &msg);

private:
    QUdpSocket *socket;
    QHostAddress hostAddr;
    qint16 port;
};
}

#endif // MESSAGESENDER_H
