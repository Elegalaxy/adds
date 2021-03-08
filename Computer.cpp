#include <iostream>
#include "Computer.h"
using namespace std;

ComputerPlayer::ComputerPlayer(){

}

char ComputerPlayer::makeMove(){
    currentMove = 'R';
    // int c = rand()%3;
    // switch(c){
    //     case 0:
    //         choice = "R";
    //         break;
    //     case 1:
    //         choice = "P";
    //         break;
    //     case 2:
    //         choice = "S";
    //         break;
    // }

    return currentMove;
}