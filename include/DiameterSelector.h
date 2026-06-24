#ifndef DIAMETERSELECTOR_H
#define DIAMETERSELECTOR_H

class DiameterSelector
{
public:

    static double getSMAWDiameter(
        double current);

    static double getGMAWDiameter(
        double current);

    static double getGTAWDiameter(
        double current);

    static double getFCAWDiameter(
        double current);

    static double getSAWDiameter(
        double current);

    static double getDiameter(
        int method,
        double current);
};

#endif