#include "MapSquare.h"

MapSquare::MapSquare(){

}

std::vector<int> MapSquare::map(std::vector<int> vec){
    func(vec, 0);
    return vec;
}

void MapSquare::func(std::vector<int>& vec, int i){
    if(i == (int)vec.size()) return;
    vec[i] = f(vec[i]);
    func(vec, i+1);
}

int MapSquare::f(int n){
    return n * n;
}