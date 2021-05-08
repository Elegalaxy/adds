#ifndef QuickSort_H
#define QuickSort_H
#include "Sort.h"

class QuickSort: public Sort{
    public:
        QuickSort();
        std::vector<int> sort(std::vector<int> list);
        void qSort(std::vector<int> &list, int l, int h);
};

#endif