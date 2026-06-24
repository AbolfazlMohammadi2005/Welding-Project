#include "../include/WeldingCalculator.h"

void WeldingCalculator::calculateCurrent(
    WeldingResult& result)
{
    result.iMin =
        result.kMin *
        result.thickness;

    result.iMax =
        result.kMax *
        result.thickness;

    result.iAvg =
        (result.iMin +
         result.iMax)
         / 2.0;
}

void WeldingCalculator::calculateVoltage(
    WeldingResult& result)
{
    result.voltage =
        result.v0 +
        result.a *
        result.iAvg;
}

void WeldingCalculator::calculatePower(
    WeldingResult& result)
{
    result.power =
        result.voltage *
        result.iAvg;
}

void WeldingCalculator::calculateSpeed(
    WeldingResult& result)
{
    result.speed =
        ((result.iAvg - 50.0)
        *
        result.metalConstant)
        /
        (4.0 *
        result.thickness);
}

void WeldingCalculator::calculateHeatInput(
    WeldingResult& result)
{
    if(result.speed <= 0)
    {
        result.heatInput = 0;
        return;
    }

    result.heatInput =
        (
        result.efficiency *
        result.voltage *
        result.iAvg
        )
        /
        (
        1000.0 *
        result.speed
        );
}

void WeldingCalculator::calculateAll(
    WeldingResult& result)
{
    calculateCurrent(result);

    calculateVoltage(result);

    calculatePower(result);

    calculateSpeed(result);

    calculateHeatInput(result);
}