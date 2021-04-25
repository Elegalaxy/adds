#include "ReduceMinimum.h"

ReduceMinimum::ReduceMinimum(){

}

int ReduceMinimum::reduce(std::vector<int> vec){
    func(vec, 0);
    return min;
}

void ReduceMinimum::func(std::vector<int>& vec, int i){
    if(i == (int)vec.size()) return;
    min = binaryOperator(vec[i], min);
    func(vec, i+1);
}

int ReduceMinimum::binaryOperator(int i, int j){
    if(i < j) return i;
    return j;
}