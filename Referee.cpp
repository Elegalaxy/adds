#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"
using namespace std;

Referee::Referee(){

}

char Referee::refGame(HumanPlayer player1, ComputerPlayer player2){
    char p1 = player1.makeMove();
    char p2 = player2.makeMove();
    
    if(p1 == p2){
        return 'T';
    }else if((p1 == 'S' && p2 == 'P') || p1 < p2){
        return 'W';
    }else if(p1 > p2){
        return 'L';
    }

    return ' ';
}