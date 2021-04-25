#ifndef FILTERODD_H
#define FILTERODD_H
#include "FilterGeneric.h"

class FilterOdd: public FilterGeneric{
    public:
        FilterOdd();
        std::vector<int> filter(std::vector<int>);
    private:
        void func(std::vector<int>&, int);
        bool g(int);
};

#endif