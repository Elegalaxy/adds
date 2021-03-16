#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <array>
#include "Player.h"
#include "Referee.h"

class Tournament{
    public:
        Tournament();
        Player * run(std::array<Player *, 8> competitors);
    private:
        Referee* referee;
};
#endif