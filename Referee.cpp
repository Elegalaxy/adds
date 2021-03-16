#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Player.h"
using namespace std;

Referee::Referee(){

}

Player* Referee::refGame(Player* player1, Player* player2){
    char p1, p2;
    int r1 = 0, r2 = 0;
    for(int i = 0; i < 5; i++){
        p1 = player1->makeMove();
        p2 = player2->makeMove();
        
        if(p1 == p2){
            r1++; r2++;
        }else if((p1 == 'S' && p2 == 'P') || (p1 < p2 && !(p1 == 'P' && p2 == 'S'))){
            r1++;
        }else if((p1 == 'P' && p2 == 'S') || p1 > p2){
            r2++;
        }else{
            cout << "BUG";
        }

        // cout << p1 << ": " << r1 << " " << p2 << ": " << r2 << endl;
    }
    // cout << endl;
    if(r1 < r2) return player2;
    return player1;
}