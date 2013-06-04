#ifndef FACTORY_H
#define FACTORY_H

#include "pipe/MessageReceiver.h"
#include "util/VehicleUserManager.h"

/**
  工厂类，用于管理一些重要的全局组件：
  MessageReceiver ： 消息接收管道
  VehicleUserManager ： 用户管理器，需要全局唯一
*/
class Factory : public QObject {
public :
    static Pipe::MessageReceiver *getReceiver();
    static Util::VehicleUserManager *getVehicleUserManager();

private :
    explicit Factory(QObject *parent = 0);
    static Factory *creator;

    Pipe::MessageReceiver *receiver;
    Util::VehicleUserManager *manager;
};

#endif // PIPECREATOR_H
