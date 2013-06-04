#ifndef SOURCEINFO_H
#define SOURCEINFO_H

#include <QString>

namespace VehicleInfo {

enum HopType {
    SIGLE_HOP = 1,
    MULTI_HOP,
    LOCAL_HOP
};

class SourceInfo {
public:
    SourceInfo(const QString &fromName);
    virtual ~SourceInfo();
    const QString &getSourceName() const;
    void setSourceInfo(const QString &name);

private:
    QString sourceName;
};
}

#endif // SOURCEINFO_H
