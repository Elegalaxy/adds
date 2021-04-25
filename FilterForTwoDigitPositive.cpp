#include "FilterForTwoDigitPositive.h"
#include <cmath>
#include <string>

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){

}

std::vector<int> FilterForTwoDigitPositive::filter(std::vector<int> vec){
    func(vec, 0);
    return vec;
}

bool FilterForTwoDigitPositive::g(int n){
    return (n >= 0 && std::to_string(abs(n)).length() == 2);
}

void FilterForTwoDigitPositive::func(std::vector<int>& vec, int i){
    if(i == vec.size()) return;
    if(g(vec[i]))
        func(vec, i+1);
    else {
        vec.erase(vec.begin()+i);
        func(vec, i);
    }
}