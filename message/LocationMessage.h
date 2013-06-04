#ifndef LOCATIONMESSAGE_H
#define LOCATIONMESSAGE_H

#include <QObject>
#include "vehicleInfo/Location.h"
#include "vehicleInfo/SourceInfo.h"

namespace Message {
using namespace VehicleInfo;
class LocationMessage : public QObject
{
    Q_OBJECT
public:
    explicit LocationMessage(QObject *parent = 0);
    virtual ~LocationMessage();

signals:
    
public slots:

private:
    Location *location;
    SourceInfo *info;
};
}

#endif // LOCATIONMESSAGE_H
