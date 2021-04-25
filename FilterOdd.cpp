#include "FilterOdd.h"

FilterOdd::FilterOdd(){

}

std::vector<int> FilterOdd::filter(std::vector<int> vec){
    func(vec, 0);
    return vec;
}

void FilterOdd::func(std::vector<int>& vec, int i){
    if(i == vec.size()) return;
    if(!g(vec[i])){
        vec.erase(vec.begin()+i);
        func(vec, i);
    }else func(vec, i+1);
}

bool FilterOdd::g(int n){
    return (n%2);
}