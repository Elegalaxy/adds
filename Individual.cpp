#include "Individual.h"

Individual::Individual(){
    binaryString = "";
    n = binaryString.length();
}

Individual::Individual(int l){
    binaryString = "";
    for(int i = 0; i < l; i++){
        binaryString += "0";
    }
    n = l;
}

Individual::Individual(std::string s){
    binaryString = s;
    n = binaryString.length();
}

std::string Individual::getString(){
    return binaryString;
}

int Individual::getBit(int pos){
    --pos;
    if(pos < 0 || pos >= n) return -1;
    std::string t = "";
    t = binaryString[pos];
    return stoi(t);
}

void Individual::flipBit(int pos){
    --pos;
    if(pos < 0 || pos >= n) return;

    if(binaryString[pos] == '1') binaryString[pos] = '0';
    else binaryString[pos] = '1';
}

int Individual::getMaxOnes(){
    int max = 0, cur = 0;
    for(int i = 0; i <= n; i++){
        if(i == n || binaryString[i] == '0'){
            if(cur > max) max = cur;
            cur = 0;
        }else cur++;
    }
    return max;
}

int Individual::getLength(){
    return n;
}
