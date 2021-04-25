#include <iostream>
#include "MapSquare.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <string>
using namespace std;

void print(vector<int> &vec){
    for(int i:vec) cout << i << " ";
    cout << endl;
}

int main(){
    vector<int> vec;
    string temp;
    
    //Parse input to vector of int
    for(int i = 0; i < 20; i++){
        cin >> temp;
        if(i < 19)
            temp = temp.substr(0, temp.length()-1);
        vec.push_back(stoi(temp));
    }

    MapGeneric * sq = new MapSquare();
    MapGeneric * tr = new MapTriple();
    MapGeneric * ab = new MapAbsoluteValue();

    FilterGeneric * odd = new FilterOdd();
    FilterGeneric * pos = new FilterNonPositive();
    FilterGeneric * two = new FilterForTwoDigitPositive();

    ReduceGeneric * mini = new ReduceMinimum();
    ReduceGeneric * gcd = new ReduceGCD();

    //Map test
    // vec = {1,2,3,4,5,6};
    // vec = tr->map(vec);
    // print(vec);

    // vec = {1,2,3,4,5,6};
    // vec = sq->map(vec);
    // print(vec);

    // vec = {-1,-2,3,4,-5,6};
    // vec = ab->map(vec);
    // print(vec);

    //Filter test
    // vec = {1,2,3,4,5,6};
    // vec = odd->filter(vec);
    // print(vec);

    // vec = {-1,-2,3,4,-5,6};
    // vec = pos->filter(vec);
    // print(vec);

    // vec = {123,23,-54,3,-9,-321,55};
    // vec = two->filter(vec);
    // print(vec);

    //Reduce test
    // vec = {23, 9, -20, 123, 99};
    // cout << mini->reduce(vec) << endl;

    // vec = {6,10,18};
    // cout << gcd->reduce(vec) << endl;

    //Multiply all number by 3 and absolute it
    // print(vec);
    vec = ab->map(vec);
    vec = tr->map(vec);

    //Select all positive 2 digit odd num
    vec = two->filter(vec);
    vec = odd->filter(vec);

    //Compute min value and GCD
    //Output "min gcd"
    cout << mini->reduce(vec) << " " << gcd->reduce(vec) << endl;

    //6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199, -156, -186, 43, -189
    //-5, -24, -123, -81, 200, 157, 84, 67, -83, -60, -72, 192, -25, -20, -50, -181, -70, -15, -108, -123

    return 0;
}