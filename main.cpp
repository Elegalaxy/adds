#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

bool cinF(){
    //If input invalid
    if(cin.fail()){
        //Print error
        cout << "ERROR" << " ";
        //Make sure don't skip other cin
        cin.clear();
        //Clear last output
        cin.ignore(1000, '\n');
        return false;
    }
    return true;
}

int main(){
    Reverse* r1 = new Reverse();
    Truckloads* t1 = new Truckloads();
    EfficientTruckloads* e1 = new EfficientTruckloads();

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
