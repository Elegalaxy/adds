#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"
#include <vector>
#include <climits>

class ReduceGCD: public ReduceGeneric{
    public:
        ReduceGCD();
        int reduce(std::vector<int>);
    private:
        void func(std::vector<int>&, int);
        int binaryOperator(int, int);
        int res = 0;
};

#endif