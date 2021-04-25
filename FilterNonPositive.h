#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric{
    public:
        FilterNonPositive();
        std::vector<int> filter(std::vector<int>);
    private:
        void func(std::vector<int>&, int);
        bool g(int);
};

#endif