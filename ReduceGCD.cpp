#include "ReduceGCD.h"

ReduceGCD::ReduceGCD(){

}

int ReduceGCD::reduce(std::vector<int> vec){
    func(vec, 0);
    return res;
}

void ReduceGCD::func(std::vector<int>& vec, int i){
    if(i == vec.size()) return;
    res = binaryOperator(vec[i], res);
    func(vec, i+1);
}

int ReduceGCD::binaryOperator(int i, int j){
    if (!i)
       return j;
    if (!j)
       return i;
  
    if (i == j)
        return i;
  
    if (i > j)
        return binaryOperator(i-j, j);
    return binaryOperator(i, j-i);
}