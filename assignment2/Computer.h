#ifndef COMPUTER_H
#define COMPUTER_H
#include "Hand.h"
#include <vector>
#include<string>

class Computer{
    public:
        Computer(int r);
        void start(int r);
        std::vector<Hand*> getVec();
    private:
        std::vector<Hand*> vec;
};

#endif