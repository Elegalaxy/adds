#include <iostream>
#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"
using namespace std;

bool cinF(){
    //If input invalid
    if(cin.fail()){
        //Print error
        cout << "ERROR" << " ";
        //Make sure don't skip other cin
        cin.clear();
        return false;
    }
    return true;
}

int main(){
    Reverse* r1 = new Reverse();
    TruckLoads* t1 = new TruckLoads();
    EfficientTruckLoads* e1 = new EfficientTruckLoads();

    int i, numCrates, loadSize;
    string s;

    cin >> i;
    cinF(); //Catch input error
    if(i<0)
        cout << "ERROR" << " ";
    else
        cout << r1->reverseDigit(i) << " ";

    cin >> s;
    cinF();
    cout << r1->reverseString(s) << " ";

    cin >> numCrates;
    cinF();
    cin >> loadSize;
    
    if (cinF()){
        cout << t1->numTrucks(numCrates, loadSize) << " ";
        cout << e1->numTrucks(numCrates, loadSize);
    }

    cout << endl;

    return 0;
}