#include "BitFlip.h"

BitFlip::BitFlip(){

}

Individual* BitFlip::mutate(Individual* i, int k){
    if(k <= 0) return i;
    int n = i->getLength();
    if(k%n == 0) i->flipBit(k-n*(k/n-1));
    else i->flipBit(k%n);
    return i;
}