#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"

class BitFlipProb: public Mutator{
    public:
        BitFlipProb();
        BitFlipProb(double p);
        Individual* mutate(Individual* i);
        Individual* mutate(Individual* i, int k);
    private:
        double prob;
};

#endif