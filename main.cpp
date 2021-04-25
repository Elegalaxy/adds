#include <iostream>
#include "MapSquare.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
using namespace std;

void print(vector<int> &vec){
    for(int i:vec) cout << i << " ";
    cout << endl;
}

int main(){
    MapGeneric * sq = new MapSquare();
    MapGeneric * tr = new MapTriple();
    MapGeneric * ab = new MapAbsoluteValue();

    vector<int> vec = {1,2,3,4,5,6};
    vec = tr->map(vec);
    print(vec);
    
    vec = {1,2,3,4,5,6};
    vec = sq->map(vec);
    print(vec);

    vec = {-2, -3, -1, 0, 5};
    vec = ab->map(vec);
    print(vec);
    return 0;
}