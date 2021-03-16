#ifndef PLAYER_H
#define PLAYER_H

class Player{
    public:
        Player();
        int id;
        virtual char makeMove() = 0;
};
#endif