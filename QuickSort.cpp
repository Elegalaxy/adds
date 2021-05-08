#include "QuickSort.h"

QuickSort::QuickSort(){

}

void QuickSort::qSort(std::vector<int> &list, int l, int h){
    if(l < h){
        int piv = list[h];
        int ind = l;

        for(int i = l; i < h; i++){
            if(list[i] < piv){
                std::swap(list[ind], list[i]);
                ind++;
            }
        }
        std::swap(list[ind], list[h]);
        
        qSort(list, 0, ind-1);
        qSort(list, ind+1, h);
    }
}

std::vector<int> QuickSort::sort(std::vector<int> list){
    qSort(list, 0, list.size()-1);
    return list;
}