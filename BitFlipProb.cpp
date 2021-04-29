#include "BitFlipProb.h"
#include <stdlib.h>

BitFlipProb::BitFlipProb(){
    prob = 0;
}

BitFlipProb::BitFlipProb(double p){
    prob = p;
}

Individual* BitFlipProb::mutate(Individual* i){
    int p = prob*100;
    double ran = rand() % (100-p)+1;

    if(ran == (double)p)
        i = mutate(i, 1);
    return i;
}

Individual* BitFlipProb::mutate(Individual* i, int k){
    if(k <= 0 || k > i->getLength()) return i;

    i->flipBit(k);
    return mutate(i, k+1);
}