#include "Computer.h"
using namespace std;

Computer::Computer(int r){
    start(r);
}

void Computer::start(int r){
    for(int i = 0; i < r; i++){
        Hand* temp = new Hand();
        vec.push_back(temp);
    }
}

vector<Hand*> Computer::getVec(){
    return vec;
}