#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric{
    public:
        FilterForTwoDigitPositive();
        std::vector<int> filter(std::vector<int>);
    private:
        void func(std::vector<int>&, int);
        bool g(int);
};

#endif