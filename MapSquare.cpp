#include "MapSquare.h"

MapSquare::MapSquare(){

}

std::vector<int> MapSquare::map(std::vector<int> vec){
    func(vec, 0);
    return vec;
}

void MapSquare::func(std::vector<int>& vec, int i){
    if(i == vec.size()) return;
    vec[i] *= vec[i];
    func(vec, i+1);
}