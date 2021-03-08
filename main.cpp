#include <iostream>
#include <vector>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main(){
    HumanPlayer human;
    ComputerPlayer computer;
    Referee referee;
    vector<char> res;

    int i;
    cin >> i;

    for(int j = 0; j < i; j++)
        res.push_back(referee.refGame(human, computer));

    for(int j = 0; j < res.size(); j++){
        cout << res[j];
        if(j < res.size()-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }
    return 0;
}