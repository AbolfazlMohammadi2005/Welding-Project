#ifndef METALDATA_H
#define METALDATA_H

#include <string>

struct WeldingRange
{
    double kMin;
    double kMax;
};

struct CurrentSensitivity
{
    double smaw;
    double gmaw;
    double gtaw;
    double fcaw;
    double saw;
};

struct SpeedConstant
{
    double smaw;
    double gmaw;
    double gtaw;
    double fcaw;
    double saw;
};

struct MetalData
{
    std::string name;

    WeldingRange smaw;
    WeldingRange gmaw;
    WeldingRange gtaw;
    WeldingRange fcaw;
    WeldingRange saw;

    CurrentSensitivity sensitivity;

    SpeedConstant speedConst;
};

#endif