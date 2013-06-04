#include "VehicleUser.h"

using namespace VehicleInfo;

VehicleUser::VehicleUser(QObject *parent) :
    QObject(parent), location(NULL), info(NULL)
{
}

VehicleUser::~VehicleUser()
{
}

Location *VehicleUser::getLocation()
{
    return location;
}

void VehicleUser::setLocation(Location *location)
{
    this->location = location;
}

SourceInfo *VehicleUser::getSourceInfo()
{
    return info;
}

void VehicleUser::setSourceInfo(SourceInfo *info)
{
    this->info = info;
}


