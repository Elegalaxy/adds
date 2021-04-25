#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive(){

}

std::vector<int> FilterNonPositive::filter(std::vector<int> vec){
    func(vec, 0);
    return vec;
}

void FilterNonPositive::func(std::vector<int>& vec, int i){
    if(i == (int)vec.size()) return;
    if(!g(vec[i])){
        vec.erase(vec.begin()+i);
        func(vec, i);
    }else func(vec, i+1);
}

bool FilterNonPositive::g(int n){
    return (n<0);
}