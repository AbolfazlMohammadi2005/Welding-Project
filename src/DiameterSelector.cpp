#include "../include/DiameterSelector.h"

double DiameterSelector::getSMAWDiameter(
    double I)
{
    if(I <= 40)  return 1.6;
    if(I <= 60)  return 2.0;
    if(I <= 90)  return 2.5;
    if(I <= 140) return 3.2;
    if(I <= 200) return 4.0;
    if(I <= 280) return 5.0;

    return 6.0;
}

double DiameterSelector::getGMAWDiameter(
    double I)
{
    if(I <= 80)  return 0.6;
    if(I <= 130) return 0.8;
    if(I <= 180) return 1.0;
    if(I <= 280) return 1.2;
    if(I <= 400) return 1.6;

    return 2.0;
}

double DiameterSelector::getGTAWDiameter(
    double I)
{
    if(I <= 25)  return 0.5;
    if(I <= 80)  return 1.0;
    if(I <= 150) return 1.6;
    if(I <= 250) return 2.4;
    if(I <= 400) return 3.2;

    return 4.0;
}

double DiameterSelector::getFCAWDiameter(
    double I)
{
    if(I <= 120) return 0.9;
    if(I <= 250) return 1.2;
    if(I <= 350) return 1.6;
    if(I <= 450) return 2.0;

    return 2.4;
}

double DiameterSelector::getSAWDiameter(
    double I)
{
    if(I <= 400)  return 2.0;
    if(I <= 600)  return 2.4;
    if(I <= 900)  return 3.2;
    if(I <= 1200) return 4.0;
    if(I <= 1500) return 4.8;

    return 6.0;
}

double DiameterSelector::getDiameter(
    int method,
    double current)
{
    switch(method)
    {
        case 1:
            return getSMAWDiameter(current);

        case 2:
            return getGMAWDiameter(current);

        case 3:
            return getGTAWDiameter(current);

        case 4:
            return getFCAWDiameter(current);

        case 5:
            return getSAWDiameter(current);

        default:
            return 0.0;
    }
}