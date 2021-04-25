#include "MapAbsoluteValue.h"

MapAbsoluteValue::MapAbsoluteValue(){

}

std::vector<int> MapAbsoluteValue::map(std::vector<int> vec){
    func(vec, 0);
    return vec;
}

void MapAbsoluteValue::func(std::vector<int>& vec, int i){
    if(i == vec.size()) return;
    if(vec[i] >= 0) return;
    vec[i] = abs(vec[i]);
    func(vec, i+1);
}