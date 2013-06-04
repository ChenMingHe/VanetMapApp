#include "Location.h"

using namespace VehicleInfo;

Location::Location(qreal _latitude, Zone _latitudeZone,
                   qreal _longitude, Zone _longitudeZone,
                   qreal _speed, qreal _direction) :
    latitude(_latitude), latitudeZone(_latitudeZone),
    longitude(_longitude), longitudeZone(_longitudeZone),
    speed(_speed), direction(_direction)
{
}

Location::~Location()
{
}

qreal Location::getLatitude() const
{
    return latitude;
}

Zone Location::getLatitudeZone() const
{
    return latitudeZone;
}

qreal Location::getLongitude() const
{
    return longitude;
}

Zone Location::getLongitudeZone() const
{
    return longitudeZone;
}

qreal Location::getSpeed() const
{
    return speed;
}

qreal Location::getDirection() const
{
    return direction;
}

void Location::setLocation(qreal latitude, Zone latitudeZone,
                           qreal longitude, Zone longitudeZone,
                           qreal speed, qreal direction)
{
    this->latitude = latitude;
    this->latitudeZone = latitudeZone;
    this->longitude = longitude;
    this->longitudeZone = longitudeZone;
    this->speed = speed;
    this->direction = direction;
}


