#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(int r){
    start(r);
}

void Human::start(int r){
    string c;
    for(int i = 0; i < r; i++){
        cin >> c;
        Hand* temp = new Hand(c);
        vec.push_back(temp);
    }
}

vector<Hand*> Human::getVec(){
    return vec;
}