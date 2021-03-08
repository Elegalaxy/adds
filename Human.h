#ifndef HUMAN_H
#define HUMAN_H
#include "Hand.h"
#include <vector>
#include<string>

class Human{
    public:
        Human(int r);
        void start(int r);
        std::vector<Hand*> getVec();
    private:
        std::vector<Hand*> vec;
};

#endif