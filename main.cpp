#include <iostream>
using namespace std;

//Question 10
int func(int n, int cur, int i){
    if(i > n) return cur;
    cur = i*i + func(n, cur, i+1);
    return cur;
}

int sumOfSquare(int n){
    return func(n, 0, 0);
}

int main(){
    cout << sumOfSquare(4) << endl;
    return 0;
}