#include "LocationMessage.h"

using namespace Message;
LocationMessage::LocationMessage(QObject *parent) :
    QObject(parent)
{
}

LocationMessage::~LocationMessage()
{
    delete location;
    delete info;
}
