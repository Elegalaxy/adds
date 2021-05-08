#include "RecursiveBinarySearch.h"

RecursiveBinarySearch::RecursiveBinarySearch(){

}

bool RecursiveBinarySearch::func(std::vector<int>& vec, int s, int e, int val){
    int mid = (e-s)/2+s;
    
    if(s <= e){
        if(vec[mid] == val)
            return true;
        else if(vec[mid] > val)
            return func(vec, s, mid-1, val);
        else if(vec[mid] < val)
            return func(vec, mid+1, e, val);
    }

    return false;
}

bool RecursiveBinarySearch::search(std::vector<int> vec, int val){
    return func(vec, 0, vec.size()-1, val);
}