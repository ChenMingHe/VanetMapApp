#include "MessageInterpreter.h"
using namespace Interpreter;

MessageInterpreter::MessageInterpreter(QObject *parent) :
    QObject(parent),
    selfLocation(new SelfLocationInterpred(this))
{
}

void MessageInterpreter::explain(QSharedPointer<QByteArray> dataP)
{
    QByteArray &dataGram = *(dataP.data());
    if (selfLocation->explain(dataGram)) {
        // TODO : ·¢ËÍÐÅºÅ
        return;
    }
}
