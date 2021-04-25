#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include "MapGeneric.h"

class MapTriple: public MapGeneric{
    public:
        MapTriple();
        std::vector<int> map(std::vector<int>);
    private:
        void func(std::vector<int>&, int);
};

#endif