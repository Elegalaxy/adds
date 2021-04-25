#include "MapTriple.h"

MapTriple::MapTriple(){

}

std::vector<int> MapTriple::map(std::vector<int> vec){
    func(vec, 0);
    return vec;
}

void MapTriple::func(std::vector<int> &vec, int i){
    if(i == vec.size()) return;
    vec[i] = f(vec[i]);
    func(vec, i+1);
}

int MapTriple::f(int n){
    return n * 3;
}