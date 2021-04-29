#include <iostream>
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
    mPtr->mutate(indPtr, k);
    return indPtr;
}

int main(){
    string s1, s2;
    int it1, it2;
    cin >> s1 >> it1 >> s2 >> it2;

    Individual* i1 = new Individual(s1);
    Individual* i2 = new Individual(s2);

    BitFlip* b1 = new BitFlip();
    Rearrange* r1 = new Rearrange();
    
    i1 = execute(i1, b1, it1);
    i2 = execute(i2, r1, it2);

    cout << i1->getString() << " " << i2->getString() << " " << i2->getMaxOnes() << endl;
    // cout << execute(i1, b1, 9)->getString() << endl;
    return 0;
}