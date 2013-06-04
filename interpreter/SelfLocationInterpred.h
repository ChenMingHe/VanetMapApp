#ifndef SELFLOCATIONINTERPRED_H
#define SELFLOCATIONINTERPRED_H

#include <QRegExp>
#include "InterpreterInterface.h"
#include "factory/Factory.h"

namespace Interpreter {

class SelfLocationInterpred : public QObject, public InterpreterInterface
{
    Q_OBJECT
public:
    explicit SelfLocationInterpred(QObject *parent = 0);
    bool explain(const QByteArray &msg);
    
signals:
    
public slots:
    
private:
    QRegExp exp;
    Util::VehicleUserManager *userManager;
};
}

#endif // SELFLOCATIONINTERPRED_H
