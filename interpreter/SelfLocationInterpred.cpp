#include "SelfLocationInterpred.h"
#include "vehicleInfo/Location.h"
using namespace Interpreter;
using namespace VehicleInfo;

SelfLocationInterpred::SelfLocationInterpred(QObject *parent) :
    QObject(parent),
    exp("^V (\\d*\\.?\\d*) (\\d*\\.?\\d*) (N|n|S|s) (\\d*\\.?\\d*) (E|e|W|w) (\\d*\\.?\\d*) (\\d*\\.?\\d*)\\s*$"),
    userManager(Factory::getVehicleUserManager())
{
}

bool SelfLocationInterpred::explain(const QByteArray &msg)
{
    int pos = exp.indexIn(msg);
    if (pos <= -1) {
        return false;
    }

    // 1    2           3    4      5     6   7     8
    // V 061802.00 30.762875 N 103.928438 E 52.89 216.71
    Location location(exp.cap(3).toDouble(),
                      toZone(exp.cap(4).toInt()),
                      exp.cap(5).toDouble(),
                      toZone(exp.cap(6).toInt()),
                      exp.cap(7).toDouble(),
                      exp.cap(8).toDouble());
    try {
        userManager->updateUserLocation(LOCAL_NAME, location);
    } catch (Util::UnFindError &) {
        userManager->addNewUser(LOCAL_NAME);
        userManager->updateUserLocation(LOCAL_NAME, location);
    }

    return true;
}
