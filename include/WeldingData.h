#ifndef WELDINGDATA_H
#define WELDINGDATA_H

struct WeldingResult
{
    double thickness = 0.0;

    double kMin = 0.0;
    double kMax = 0.0;

    double iMin = 0.0;
    double iMax = 0.0;
    double iAvg = 0.0;

    double v0 = 0.0;
    double a = 0.0;

    double voltage = 0.0;
    double power = 0.0;

    double metalConstant = 0.0;

    double speed = 0.0;

    double efficiency = 0.0;

    double heatInput = 0.0;

    double recommendedDiameter = 0.0;
};

#endif