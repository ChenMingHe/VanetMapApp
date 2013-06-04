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
      @brief ��ȡname�û���λ����Ϣ
      @param name : �û�����
      @return �û�λ����Ϣ����
      @throw UnFindError : ���޷���ȡ����Ӧ�û���Ϣʱ�׳�
      */
    const Location &getUserLocation(const QString &name);
    /**
      @brief ����name�û���λ����Ϣ
      @param name : �û�����
      @param location : �����location����
      @throw UnFindError : ���޷����µ���Ӧ�û���Ϣʱ�׳�
      */
    void updateUserLocation(const QString &name, const Location &location);
    /**
      @brief ��ȡname�û���Դ��Ϣ
      @param name : �û�����
      @return �û�Դ��Ϣ
      @throw UnFindError : ���޷���ȡ����Ӧ�û���Ϣʱ�׳�
      */
    const SourceInfo &getSourceInfo(const QString &name);
    /**
      @brief ����name�û���λ����Ϣ
      @param name : �û�����
      @param location : �����location����
      @throw UnFindError : ���޷����µ���Ӧ�û���Ϣʱ�׳�
      */
    void updateSourceInfo(const QString &name, const SourceInfo &info);
    /**
      @brief ����������м���������ֵ��û�
      @param name : ��ӵ��û�����
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
