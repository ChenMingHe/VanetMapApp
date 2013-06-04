#ifndef FACTORY_H
#define FACTORY_H

#include "pipe/MessageReceiver.h"
#include "util/VehicleUserManager.h"

/**
  �����࣬���ڹ���һЩ��Ҫ��ȫ�������
  MessageReceiver �� ��Ϣ���չܵ�
  VehicleUserManager �� �û�����������Ҫȫ��Ψһ
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
