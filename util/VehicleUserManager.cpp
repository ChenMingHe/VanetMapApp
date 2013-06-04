#include "VehicleUserManager.h"

using namespace Util;
VehicleUserManager::VehicleUserManager(QObject *parent) :
    QObject(parent)
{
}

VehicleUserManager::~VehicleUserManager()
{
    foreach(Location *l, locationManager) {
        delete l;
    }
    foreach(SourceInfo *i, infoManager) {
        delete i;
    }
}

const Location &VehicleUserManager::getUserLocation(const QString &name)
{
    QMap<VehicleName, Location *>::iterator itr = locationManager.find(name);
    if (itr == locationManager.end()) {
        throw UnFindError("getUserLocation() : unfind " + name);
    }
    return *(itr.value());
}

void VehicleUserManager::updateUserLocation(const QString &name, const Location &location)
{
    QMap<VehicleName, Location *>::iterator itr = locationManager.find(name);
    if (itr == locationManager.end()) {
        throw UnFindError("updateUserLocation() : unfind " + name);
    }
    Location *l = itr.value();
    Location *tmp = const_cast<Location *>(&location);
    l->setLocation(tmp->getLatitude(),
                   tmp->getLatitudeZone(),
                   tmp->getLongitude(),
                   tmp->getLongitudeZone(),
                   tmp->getSpeed(),
                   tmp->getDirection());

}

const SourceInfo &VehicleUserManager::getSourceInfo(const QString &name)
{
    QMap<VehicleName, SourceInfo *>::iterator itr = infoManager.find(name);
    if (itr == infoManager.end()) {
       throw UnFindError("getSourceInfo() : unfind " + name);
    }

    return *(itr.value());
}

void VehicleUserManager::updateSourceInfo(const QString &name, const SourceInfo &info)
{
    QMap<VehicleName, SourceInfo *>::iterator itr = infoManager.find(name);
    if (itr == infoManager.end()) {
        throw UnFindError("updateSourceInfo() : unfind " + name);
    }

    SourceInfo *i = itr.value();
    i->setSourceInfo(info.getSourceName());
}

void VehicleUserManager::addNewUser(const QString &name)
{
    locationManager.insert(name, new Location(0, UNKNOW, 0, UNKNOW, 0, 0));
    infoManager.insert(name, new SourceInfo("UNKNOWN"));
}

