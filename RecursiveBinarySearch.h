#ifndef RecursiveBinarySearch_H
#define RecursiveBinarySearch_H
#include <vector>

class RecursiveBinarySearch{
    public:
        RecursiveBinarySearch();
        bool search(std::vector<int>, int);
    private:
        bool func(std::vector<int>&, int, int, int);
};

#endif