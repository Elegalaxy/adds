#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric{
    public:
        FilterGeneric();
        virtual std::vector<int> filter(std::vector<int>) = 0;
        virtual void func(std::vector<int>&, int) = 0;
        virtual bool g(int) = 0;
};

#endif