#include "TruckLoads.h"
#include <iostream>

Truckloads::Truckloads(){

}

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= 0 || loadSize <= 0 || numCrates > 10000 || loadSize >= 10000){
        return -1;
    }
    if(numCrates <= loadSize) return 1; //If the numCrates fulfills, return 1

    int cur = 0;
    //Number require for smaller case(numCrates/2) plus another smaller case(numCrates/2)
    if(numCrates %2 == 0){
        cur+=numTrucks(numCrates/2, loadSize)+numTrucks(numCrates/2, loadSize);
    }else{
        //For odd number we divide to numCrates/2 and (numCrates/2) +1
        cur+=numTrucks(numCrates/2, loadSize)+numTrucks((numCrates/2)+1, loadSize);
    }

    return cur;
}
