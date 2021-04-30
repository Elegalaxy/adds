#include "Rearrange.h"
#include <string>
#include <iostream>
Rearrange::Rearrange(){

}

Individual* Rearrange::mutate(Individual* i, int k){
    if(k <= 0) return i;

    int n = i->getLength();
    if(k%n == 0) k = k-n*(k/n-1);
    else k = k%n;

    std::string temp = i->getString();
    temp = temp.substr(k-1) + temp.substr(0, k-1);
    delete(i);
    return new Individual(temp);
}