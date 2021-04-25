#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include "MapGeneric.h"

class MapSquare: public MapGeneric{
    public:
        MapSquare();
        std::vector<int> map(std::vector<int>);
    private:
        void func(std::vector<int>&, int);
        int f(int);
};

#endif