#include <iostream>
#include <string>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main(){
    string s;
    string temp = "";
    vector<int> arr;
    getline(cin, s);

    for(int i = 0; i <= s.length(); i++){
        if(i == s.length() || s[i] == ' '){
            arr.push_back(stoi(temp));
            temp = "";
        }
        else
            temp += s[i];
    }

    Sort* sQ = new QuickSort();
    arr = sQ->sort(arr);

    RecursiveBinarySearch* r = new RecursiveBinarySearch();
    if(r->search(arr, 1))
        cout << "true" << " ";
    else
        cout << "false" << " ";

    for(int i:arr) cout << i << " ";
    cout << endl;

    return 0;
}