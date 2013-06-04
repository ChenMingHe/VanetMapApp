#ifndef LOCATION_H
#define LOCATION_H

#include <QtCore>
#include <assert.h>

namespace VehicleInfo {

enum Zone {
    UNKNOW = 0,
    NORTHERN,
    SOUTHERN,
    EASTERN,
    WESTERN
};

inline Zone toZone(char type) {
    switch (type) {
    case ('n') :
    case ('N') : return NORTHERN;
    case ('s') :
    case ('S') : return SOUTHERN;
    case ('e') :
    case ('E') : return EASTERN;
    case ('w') :
    case ('W') : return WESTERN;
    default : return UNKNOW;
    }
}

#define LOCAL_NAME "ME"

class Location {
public:
    Location(qreal _latitude,
             Zone _latitudeZone,
             qreal _longitude,
             Zone _longitudeZone,
             qreal _speed,
             qreal _direction);
    virtual ~Location();
    qreal getLatitude() const;
    Zone getLatitudeZone() const;
    qreal getLongitude() const;
    Zone getLongitudeZone() const;
    qreal getSpeed() const;
    qreal getDirection() const;
    void setLocation(qreal latitude,
                     Zone latitudeZone,
                     qreal longitude,
                     Zone longitudeZone,
                     qreal speed,
                     qreal direction);

private:
    qreal latitude;
    Zone latitudeZone;
    qreal longitude;
    Zone longitudeZone;
    qreal speed;
    qreal direction;
};
}

#endif // LOCATION_H
