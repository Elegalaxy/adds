#include "MapAbsoluteValue.h"
#include <iostream>
MapAbsoluteValue::MapAbsoluteValue(){

}

std::vector<int> MapAbsoluteValue::map(std::vector<int> vec){
    func(vec, 0);
    return vec;
}

void MapAbsoluteValue::func(std::vector<int>& vec, int i){
    if(i == (int)vec.size()) return;
    if(vec[i] < 0)
        vec[i] = f(vec[i]);
    func(vec, i+1);
}

int MapAbsoluteValue::f(int n){
    return abs(n);
}