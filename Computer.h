#ifndef COMPUTER_H
#define COMPUTER_H

class ComputerPlayer{
    public:
        ComputerPlayer();
        char makeMove();
    private:
        char currentMove;
};
#endif