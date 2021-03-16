#include <iostream>
#include <array>
#include "Player.h"
#include "Tournament.h"

#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
using namespace std;

int main(){
    //HumanPlayer* human = new HumanPlayer();
    Player* p1 = new FistfullODollars();
    Player* p2 = new RandomComputer(); //s
    Player* p3 = new Avalanche();
    Player* p4 = new Bureaucrat(); //s //f
    Player* p5 = new Toolbox(); //s //f
    Player* p6 = new Crescendo();
    Player* p7 = new PaperDoll(); //s
    Player* p8 = new FistfullODollars();

    p1->id=1;
    p2->id=2;
    p3->id=3;
    p4->id=4;
    p5->id=5;
    p6->id=6;
    p7->id=7;
    p8->id=8;

    array<Player*, 8> arr = {p1,p2,p3,p4,p5,p6,p7,p8};
    Tournament* t = new Tournament();
    cout << t->run(arr)->id << endl;;

    return 0;
}