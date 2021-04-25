#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric{
    public:
        MapGeneric();
        virtual std::vector<int> map(std::vector<int>) = 0;
        virtual void func(std::vector<int>&, int) = 0;
        virtual int f(int) = 0;
};

#endif