#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include "MapGeneric.h"
#include <cmath>

class MapAbsoluteValue: public MapGeneric{
    public:
        MapAbsoluteValue();
        std::vector<int> map(std::vector<int>);
    private:
        void func(std::vector<int>&, int);
};

#endif