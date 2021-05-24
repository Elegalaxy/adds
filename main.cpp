#include <iostream>
#include "Infix.h"
using namespace std;

int main(){
    string s;
    getline(cin, s);

    Infix* infix = new Infix(s);
    infix->convert();
    return 0;
}