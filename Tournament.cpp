#include <vector>
#include "Tournament.h"
using namespace std;

Tournament::Tournament(){
    referee = new Referee();
}

Player * Tournament::run(array<Player *, 8> competitors){
    vector<Player*> res;
    
    //Quarter-final
    for(int i = 0; i < 8; i+=2){
        res.push_back(referee->refGame(competitors[i], competitors[i+1]));
    }

    //Semi-final
    vector<Player*> res2;
    for(int i = 0; i < 4; i+=2){
        res2.push_back(referee->refGame(res[i], res[i+1]));
    }

    //Final
    return referee->refGame(res2[0], res2[1]);
}