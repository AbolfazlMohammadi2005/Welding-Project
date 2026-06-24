#include "../include/MaterialDatabase.h"

static MetalData materials[] =
{
    {
        "Mild Steel",

        {30,50},
        {35,60},
        {40,70},
        {60,100},
        {70,120},

        {0.040,0.050,0.040,0.025,0.080},

        {1.00,1.00,1.00,1.00,1.00}
    },

    {
        "Stainless Steel",

        {25,45},
        {30,55},
        {35,65},
        {50,90},
        {60,110},

        {0.040,0.050,0.040,0.025,0.080},

        {0.90,0.90,0.80,0.85,0.85}
    },

    {
        "Aluminum 6061",

        {30,55},
        {40,70},
        {45,75},
        {70,110},
        {80,130},

        {0.040,0.050,0.028,0.000,0.070},

        {1.30,1.30,1.20,1.35,0.00}
    }
};

const MetalData*
MaterialDatabase::getMaterials()
{
    return materials;
}

int MaterialDatabase::getCount()
{
    return sizeof(materials) /
           sizeof(materials[0]);
}

const MetalData&
MaterialDatabase::getMaterial(int index)
{
    return materials[index];
}