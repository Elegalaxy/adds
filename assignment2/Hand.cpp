#include <cstdlib>
#include "Hand.h"
using namespace std;

Hand::Hand(){
    choice = "R";
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
}

Hand::Hand(string s){
    choice = s;
}

string Hand::getChoice(){
    return choice;
}