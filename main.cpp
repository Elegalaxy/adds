#include <iostream>
#include "Infix.h"
using namespace std;

int main(){
    string s;
    getline(cin, s);

    if(s == " " || s.length() == 0){
        cout << "Error" << endl;
        return 0;
    }
    Infix* infix = new Infix(s);
    infix->convert();
    return 0;
}