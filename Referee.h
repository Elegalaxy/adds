#ifndef REFEREE_H
#define REFEREE_H
#include "Hand.h"
#include <vector>
#include <string>

class Referee{
    public:
        Referee();
        void check(std::vector<Hand*> player, std::vector<Hand*> computer);
    private:
        std::string c1, c2;
};

#endif