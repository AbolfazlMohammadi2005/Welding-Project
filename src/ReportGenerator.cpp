#include <iostream>
#include <iomanip>
#include <cmath>

#include "../include/ReportGenerator.h"

using namespace std;

const char*
ReportGenerator::getMethodName(
    int method)
{
    switch(method)
    {
        case 1: return "SMAW";
        case 2: return "GMAW";
        case 3: return "GTAW (TIG)";
        case 4: return "FCAW";
        case 5: return "SAW";

        default:
            return "Unknown";
    }
}

void ReportGenerator::printReport(
    int method,
    const MetalData& metal,
    const WeldingResult& result)
{
    cout << "\n";
    cout << "=====================================\n";
    cout << "          WELDING REPORT\n";
    cout << "=====================================\n";

    cout << fixed
         << setprecision(2);

    cout
        << "Method              : "
        << getMethodName(method)
        << endl;

    cout
        << "Base Metal          : "
        << metal.name
        << endl;

    cout
        << "Thickness           : "
        << result.thickness
        << " mm\n";

    cout
        << "Kmin                : "
        << result.kMin
        << endl;

    cout
        << "Kmax                : "
        << result.kMax
        << endl;

    cout
        << "Current Min         : "
        << result.iMin
        << " A\n";

    cout
        << "Current Max         : "
        << result.iMax
        << " A\n";

    cout
        << "Average Current     : "
        << result.iAvg
        << " A\n";

    cout
        << "Voltage             : "
        << abs(result.voltage)
        << " V\n";

    cout
        << "Power               : "
        << result.power
        << " W\n";

  cout
    << "Travel Speed        : "
    << result.speed
    << " mm/min\n";

    cout
        << "Heat Input          : "
        << result.heatInput
        << " kJ/mm\n";

    cout
        << "Recommended Dia.    : "
        << result.recommendedDiameter
        << " mm\n";

    cout
        << "=====================================\n";
}
