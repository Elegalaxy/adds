#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"

class Rearrange: public Mutator{
    public:
        Rearrange();
        Individual* mutate(Individual* i, int k);
    private:
};

#endif