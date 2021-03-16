#ifndef SINGLE_H
#define SINGLE_H
#include "Player.h"

class Single: public Player{
    public:
        Single();
        char makeMove();
    protected:
        char move;
};
#endif