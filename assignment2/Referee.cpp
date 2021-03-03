#include <iostream>
#include "Referee.h"
using namespace std;

Referee::Referee(){

}

void Referee::check(vector<Hand*> player, vector<Hand*> computer){
    int n = player.size();
    for(int i = 0; i < n; i++){
        c1 = player[i]->getChoice();
        c2 = computer[i]->getChoice();
        
        if(c1 == c2){
            cout << "T";
        }else if((c1 == "S" && c2 == "P") || c1 < c2){
            cout << "W";
        }else if(c1 > c2){
            cout << "L";
        }

        if(i != n-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }
}