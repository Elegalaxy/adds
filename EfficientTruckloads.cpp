#include "EfficientTruckLoads.h"
#include <iostream>

EfficientTruckloads::EfficientTruckloads(){

}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= 0 || loadSize <= 0 || numCrates > 10000 || loadSize > numCrates){
        return -1;
    }
    
    //Using map for dp table
    //Return if result exist
    if(dp[std::make_pair(numCrates, loadSize)] != 0) return dp[std::make_pair(numCrates, loadSize)];
    if(numCrates <= loadSize) return 1; //If the numCrates fulfills, return 1
    
    int cur = 0;
    //Number require for smaller case(numCrates/2) plus another smaller case(numCrates/2)
    if(numCrates %2 == 0){
        cur+=numTrucks(numCrates/2, loadSize)+numTrucks(numCrates/2, loadSize);
    }else{
        //For odd number we divide to numCrates/2 and (numCrates/2) +1
        cur+=numTrucks(numCrates/2, loadSize)+numTrucks((numCrates/2)+1, loadSize);
    }

    //Record into dp table
    dp[std::make_pair(numCrates, loadSize)] = cur;
    
    return cur;
}
