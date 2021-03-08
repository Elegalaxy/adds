#ifndef HUMAN_H
#define HUMAN_H

class HumanPlayer{
    public:
        HumanPlayer();
        char makeMove();
    private:
        char currentMove;
};
#endif