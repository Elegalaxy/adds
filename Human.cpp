#include <iostream>
#include "Human.h"
using namespace std;

HumanPlayer::HumanPlayer(){

}

char HumanPlayer::makeMove(){
    char cur;
    cout << "Enter move: ";
    cin >> cur;
    currentMove = cur;
    return currentMove;
}