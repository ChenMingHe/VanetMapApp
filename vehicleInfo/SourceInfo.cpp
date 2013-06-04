#include "SourceInfo.h"

using namespace VehicleInfo;

SourceInfo::SourceInfo(const QString &fromName) :
    sourceName(fromName)
{
}

SourceInfo::~SourceInfo()
{
}

const QString &SourceInfo::getSourceName() const
{
    return sourceName;
}

void SourceInfo::setSourceInfo(const QString &name)
{
    this->sourceName = name;
}



