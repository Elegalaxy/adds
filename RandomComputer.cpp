#include <iostream>
#include <stdlib.h>
#include "RandomComputer.h"
using namespace std;

RandomComputer::RandomComputer(){

}

char RandomComputer::makeMove(){
    char choice;
    int c = rand()%3;
    switch(c){
        case 0:
            choice = 'R';
            break;
        case 1:
            choice = 'P';
            break;
        case 2:
            choice = 'S';
            break;
    }
    return choice;
}