#include "Reverse.h"

Reverse::Reverse(){

}

int Reverse::reverseDigit(int val){
    if(val <= 0){ //In case input is negative, Zero can be return directly
        return val;
    }

    //Transform to string and transform back to integer after reverse
    return stoi(reverseString(std::to_string(val))); 
}

std::string Reverse::reverseString(std::string val){
    if(val == "") return val; //Base case, return when val is none
    char t = val[val.length()-1]; //Get the last char
    std::string s;
    s.append(1,t); //Append char into new string
    s += reverseString(val.substr(0, val.length()-1)); //Recursion
    return s;
}