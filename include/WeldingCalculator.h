#ifndef WELDINGCALCULATOR_H
#define WELDINGCALCULATOR_H

#include "WeldingData.h"

class WeldingCalculator
{
public:

    static void calculateCurrent(
        WeldingResult& result);

    static void calculateVoltage(
        WeldingResult& result);

    static void calculatePower(
        WeldingResult& result);

    static void calculateSpeed(
        WeldingResult& result);

    static void calculateHeatInput(
        WeldingResult& result);

    static void calculateAll(
        WeldingResult& result);
};

#endif