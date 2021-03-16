#ifndef ORDER_H
#define ORDER_H
#include <vector>
#include "Player.h"

class Order: public Player{
    public:
        Order();
        char makeMove();
        void reset();
    protected:
        std::vector<char> move;
    private:
        int cur;
};
#endif