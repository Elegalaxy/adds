#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <map>
#include <utility>

class EfficientTruckloads{
    private:
        //Using map for dp table
        std::map<std::pair<int, int>, int> dp;

    public:
        EfficientTruckloads();
        int numTrucks(int numCrates, int loadSize);
};

#endif
