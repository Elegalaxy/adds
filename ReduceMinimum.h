#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"
#include <vector>
#include <climits>

class ReduceMinimum: public ReduceGeneric{
    public:
        ReduceMinimum();
        int reduce(std::vector<int>);
    private:
        void func(std::vector<int>&, int);
        int binaryOperator(int, int);
        int min = INT_MAX;
};

#endif