#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric{
    public:
        ReduceGeneric();
        virtual int reduce(std::vector<int>) = 0;
        virtual void func(std::vector<int>&, int) = 0;
        virtual int binaryOperator(int, int) = 0;
};

#endif