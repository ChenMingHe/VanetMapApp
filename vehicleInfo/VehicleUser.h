#ifndef VEHICLEUSER_H
#define VEHICLEUSER_H

#include <QObject>
#include "Location.h"
#include "SourceInfo.h"
// XXX:Ã‘Ã≠≤ª”√
namespace VehicleInfo {
class VehicleUser : public QObject
{
    Q_OBJECT
public:
    explicit VehicleUser(QObject *parent = 0);
    virtual ~VehicleUser();
    Location *getLocation();
    void setLocation(Location *location);
    SourceInfo *getSourceInfo();
    void setSourceInfo(SourceInfo *info);

signals:
    
public slots:

private:
    Location *location;
    SourceInfo *info;
};
}
#endif // VEHICLEUSER_H
