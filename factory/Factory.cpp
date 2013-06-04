#include "Factory.h"

using namespace Pipe;
using namespace Util;

MessageReceiver *Factory::getReceiver()
{
    if (creator == NULL) {
        creator = new Factory();
    }
    return creator->receiver;
}

VehicleUserManager *Factory::getVehicleUserManager()
{
    if (creator == NULL) {
        creator = new Factory();
    }
    return creator->manager;
}

Factory *Factory::creator = NULL;
Factory::Factory(QObject *parent) :
    QObject(parent),
    receiver(new MessageReceiver(this)),
    manager(new VehicleUserManager(this))
{
}



