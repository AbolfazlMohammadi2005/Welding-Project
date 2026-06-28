#include <iostream>

#include "../include/MaterialDatabase.h"
#include "../include/WeldingCalculator.h"
#include "../include/DiameterSelector.h"
#include "../include/ReportGenerator.h"

using namespace std;

void showMethods()
{
    cout << "\n===== Welding Methods =====\n";

    cout << "1. SMAW\n";
    cout << "2. GMAW\n";
    cout << "3. GTAW (TIG)\n";
    cout << "4. FCAW\n";
    cout << "5. SAW\n";
}
void showMaterials()
{
    cout << "\n===== Base Metals =====\n";

    for(int i = 0;
        i < MaterialDatabase::getCount();
        i++)
    {
        cout
            << i + 1
            << ". "
            << MaterialDatabase::getMaterial(i).name
            << endl;
    }
}
void loadCurrentRange(
    int method,
    const MetalData& metal,
    WeldingResult& result)
{
    switch(method)
    {
        case 1:
            result.kMin = metal.smaw.kMin;
            result.kMax = metal.smaw.kMax;
            break;

        case 2:
            result.kMin = metal.gmaw.kMin;
            result.kMax = metal.gmaw.kMax;
            break;

        case 3:
            result.kMin = metal.gtaw.kMin;
            result.kMax = metal.gtaw.kMax;
            break;

        case 4:
            result.kMin = metal.fcaw.kMin;
            result.kMax = metal.fcaw.kMax;
            break;

        case 5:
            result.kMin = metal.saw.kMin;
            result.kMax = metal.saw.kMax;
            break;
    }
}
void loadSensitivity(
    int method,
    const MetalData& metal,
    WeldingResult& result)
{
    switch(method)
    {
        case 1:
            result.a =
                metal.sensitivity.smaw;
            break;

        case 2:
            result.a =
                metal.sensitivity.gmaw;
            break;

        case 3:
            result.a =
                metal.sensitivity.gtaw;
            break;

        case 4:
            result.a =
                metal.sensitivity.fcaw;
            break;

        case 5:
            result.a =
                metal.sensitivity.saw;
            break;
    }
}
void loadSpeedConstant(
    int method,
    const MetalData& metal,
    WeldingResult& result)
{
    switch(method)
    {
        case 1:
            result.metalConstant =
                metal.speedConst.smaw;
            break;

        case 2:
            result.metalConstant =
                metal.speedConst.gmaw;
            break;

        case 3:
            result.metalConstant =
                metal.speedConst.gtaw;
            break;

        case 4:
            result.metalConstant =
                metal.speedConst.fcaw;
            break;

        case 5:
            result.metalConstant =
                metal.speedConst.saw;
            break;
    }
}
int main()
{
    int methodChoice;
    int metalChoice;

    WeldingResult result;

    showMethods();

    cout << "\nSelect Method: ";
    cin >> methodChoice;

    showMaterials();

    cout << "\nSelect Metal: ";
    cin >> metalChoice;

    const MetalData& metal =
        MaterialDatabase::
        getMaterial(
            metalChoice - 1);

    loadCurrentRange(
        methodChoice,
        metal,
        result);

    loadSensitivity(
        methodChoice,
        metal,
        result);

    loadSpeedConstant(
        methodChoice,
        metal,
        result);

    cout
        << "\nThickness (mm): ";

    cin
        >> result.thickness;

    cout
        << "Base Voltage V0: ";

    cin
        >> result.v0;

    cout
        << "Efficiency (0-1): ";

    cin
        >> result.efficiency;

    WeldingCalculator::
        calculateAll(result);

    result.recommendedDiameter =
        DiameterSelector::
        getDiameter(
            methodChoice,
            result.iAvg);

    cout << "\n";
    cout << "============================\n";
    cout << "       RESULTS\n";
    cout << "============================\n";

    cout
        << "Metal: "
        << metal.name
        << endl;

    cout
        << "Thickness: "
        << result.thickness
        << " mm\n";

    cout
        << "Kmin: "
        << result.kMin
        << endl;

    cout
        << "Kmax: "
        << result.kMax
        << endl;

    cout
        << "Imin: "
        << result.iMin
        << " A\n";

    cout
        << "Imax: "
        << result.iMax
        << " A\n";

    cout
        << "Iavg: "
        << result.iAvg
        << " A\n";

    cout
        << "Voltage: "
        << result.voltage
        << " V\n";

    cout
        << "Power: "
        << result.power
        << " W\n";

    cout
        << "Speed: "
        << result.speed
        << " mm/min\n";

    cout
        << "Heat Input: "
        << result.heatInput
        << " kJ/mm\n";

    cout
        << "Recommended Diameter: "
        << result.recommendedDiameter
        << " mm\n";

    return 0;
}