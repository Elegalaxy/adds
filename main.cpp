#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

bool cinF(int i, bool last){
    //If input invalid
    if(cin.fail()){
        //Print error
        cout << "ERROR" << " ";

        //Make sure don't skip other cin
        cin.clear();
        //Clear last output
        if(last)
            cin.ignore(1000, '\n');
        else
            cin.ignore(1000, ' ');

        return false;
    }
    return true;
}

bool cinF(string s, bool last){
    //If input invalid
    if(cin.fail()){
        //Print error
        cout << "ERROR" << " ";
        //Make sure don't skip other cin
        cin.clear();
        //Clear last output
        if(last)
            cin.ignore(1000, '\n');
        else
            cin.ignore(1000, ' ');

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
    if(cinF(i, false)) //Catch input error
        cout << r1->reverseDigit(i) << " ";
        
    cin >> s;
    if(cinF(s, false))
        cout << r1->reverseString(s) << " ";

    bool check = true, check2 = false;
    cin >> numCrates;

    if(cinF(numCrates, false)){
        cin >> loadSize;
        if(cinF(loadSize, true)){
            check2 = true;
        }
    }else{
        check = false;
    }

    if(check && check2){
        if(numCrates <= 0 || loadSize <= 0 || numCrates > 10000 || loadSize > numCrates){
            t1->numTrucks(numCrates, loadSize);
            cout << " ";
            e1->numTrucks(numCrates, loadSize);

        }else{
            cout << t1->numTrucks(numCrates, loadSize) << " ";
            cout << e1->numTrucks(numCrates, loadSize);
        }
    }else{
        cout << "ERROR";
    }

    cout << endl;

    return 0;
}
