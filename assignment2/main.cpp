#include <iostream>
#include "Hand.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main(){
    int round;
    cin >> round;
    Human* h = new Human(round);
    Computer* c = new Computer(round);
    Referee* r = new Referee();

    r->check(h->getVec(), c->getVec());
    return 0;
}