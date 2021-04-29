#include "Rearrange.h"
#include <string>

Rearrange::Rearrange(){

}

Individual* Rearrange::mutate(Individual* i, int k){
    if(k <= 0) return i;
    std::string temp = i->getString();
    temp = temp.substr(k-1) + temp.substr(0, k-1);
    delete(i);
    return new Individual(temp);
}