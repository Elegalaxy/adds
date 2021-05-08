#ifndef Sort_H
#define Sort_H
#include <vector>

class Sort{
    public:
        Sort();
        virtual std::vector<int> sort(std::vector<int> list) = 0;
};

#endif