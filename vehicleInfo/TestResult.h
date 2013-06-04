#ifndef TESTRESULT_H
#define TESTRESULT_H

namespace VehicleInfo {

enum TestType {
    BANDWIDTH_TEST = 1,
    RTT_TEST
};

class TestResult {
public:
    virtual TestType getTestType() = 0;
    virtual int getTestRounds() = 0;
    virtual qreal getResult() = 0;
};

}

#endif // TESTRESULT_H
