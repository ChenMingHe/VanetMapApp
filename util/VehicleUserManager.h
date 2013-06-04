#ifndef VEHICLEUSERMANAGER_H
#define VEHICLEUSERMANAGER_H

#include <QObject>
#include <QMap>
#include "vehicleInfo/Location.h"
#include "vehicleInfo/SourceInfo.h"

namespace Util {

using namespace VehicleInfo;
typedef QString VehicleName;

class VehicleUserManager : public QObject
{
    Q_OBJECT
public:
    explicit VehicleUserManager(QObject *parent = 0);
    virtual ~VehicleUserManager();

    /**
      @brief 获取name用户的位置信息
      @param name : 用户名称
      @return 用户位置信息数据
      @throw UnFindError : 当无法获取到对应用户信息时抛出
      */
    const Location &getUserLocation(const QString &name);
    /**
      @brief 更新name用户的位置信息
      @param name : 用户名称
      @param location : 输入的location数据
      @throw UnFindError : 当无法更新到对应用户信息时抛出
      */
    void updateUserLocation(const QString &name, const Location &location);
    /**
      @brief 获取name用户的源信息
      @param name : 用户名称
      @return 用户源信息
      @throw UnFindError : 当无法获取到对应用户信息时抛出
      */
    const SourceInfo &getSourceInfo(const QString &name);
    /**
      @brief 更新name用户的位置信息
      @param name : 用户名称
      @param location : 输入的location数据
      @throw UnFindError : 当无法更新到对应用户信息时抛出
      */
    void updateSourceInfo(const QString &name, const SourceInfo &info);
    /**
      @brief 向管理容器中加入对用名字的用户
      @param name : 添加的用户名称
      */
    void addNewUser(const QString &name);

private:
    QMap<VehicleName, Location *> locationManager;
    QMap<VehicleName, SourceInfo *> infoManager;
};

class UnFindError {
public:
    UnFindError(const QString &msg) : errorMsg(msg) {}

    QString &what() { return errorMsg; }
private:
    QString errorMsg;
};
}



#endif // VEHICLEUSERMANAGER_H
