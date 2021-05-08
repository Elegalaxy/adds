#ifndef BubbleSort_H
#define BubbleSort_H
#include "Sort.h"

class BubbleSort: public Sort{
    public:
        BubbleSort();
        std::vector<int> sort(std::vector<int> list);
};

#endif