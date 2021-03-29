#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <map>
#include <utility>

class EfficientTruckLoads{
    private:
        //Using map for dp table
        std::map<std::pair<int, int>, int> dp;

    public:
        EfficientTruckLoads();
        int numTrucks(int numCrates, int loadSize);
};

#endif