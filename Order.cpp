#include "Order.h"
#include <vector>
using namespace std;

Order::Order(){
    reset();
    move = vector<char>(3);
}

char Order::makeMove(){
    if(cur >= 2) reset();
    return move[++cur];
}

void Order::reset(){
    cur = -1;
}