#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H

#include "MetalData.h"
#include "WeldingData.h"
#include <cmath>

class ReportGenerator
{
public:

    static void printReport(
        int method,
        const MetalData& metal,
        const WeldingResult& result);

    static const char*
    getMethodName(int method);
};

#endif
