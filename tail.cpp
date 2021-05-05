#include <iostream>
using namespace std;

//Question 11
int func2(int n, int cur, int i){
    if(!i) return cur;
    cur += i*i;
    return func2(n, cur, i-1);
}

int sumOfSquare(int n){
    return func2(n, 0, n);
}

int main(){
    cout << sumOfSquare(4) << endl;
    return 0;
}