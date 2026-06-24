#ifndef MATERIALDATABASE_H
#define MATERIALDATABASE_H

#include "MetalData.h"

class MaterialDatabase
{
public:

    static const MetalData* getMaterials();

    static int getCount();

    static const MetalData&
    getMaterial(int index);
};

#endif