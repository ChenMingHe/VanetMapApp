#ifndef MESSAGEINTERPRETER_H
#define MESSAGEINTERPRETER_H

#include <QObject>
#include <QSharedPointer>
#include <QVector>
#include "interpreter/SelfLocationInterpred.h"

namespace Interpreter {
class MessageInterpreter : public QObject
{
    Q_OBJECT
public:
    explicit MessageInterpreter(QObject *parent = 0);
    
signals:

public slots :
    void explain(QSharedPointer<QByteArray> dataP);
    
private:
    InterpreterInterface *selfLocation;
};
}

#endif // MESSAGEINTERPRETER_H
