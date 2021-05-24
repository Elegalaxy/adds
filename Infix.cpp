#include "Infix.h"
#include <iostream>
#include <stack>
#include <queue>

Infix::Infix(){
    note = "";
}

Infix::Infix(std::string s){
    note = s;
}

void Infix::setNot(std::string s){
    note = s;
}

std::string Infix::getNot(){
    return note;
}

void Infix::convert(){
    //Parse all elements from notation

    std::stack<std::string> syms; //Store all symbols by order
    std::queue<std::string> nums; //Store all numbers by order
    int n = note.length(); //Length of notation
    std::string temp = ""; //Store current word
    bool isNum = false; //Check if number section start

    for(int i = 0; i <= n; i++){
        if(i == n || note[i] == ' '){
            if(isNum){ //If number section start
                nums.push(temp); //Push current number
            }else{ //If this is still symbol
                //Push last symbol into stack
                syms.push(temp);
                //Check if number start
                if(isdigit(note[i+1]))
                    isNum = true;
            }
            temp = "";
        }else{
            //Parse word from string
            temp += note[i];
        }
    }

    //Check if the input is legit
    if(nums.size() != syms.size()+1){
        //The num of numbers must be 1 num more than num of symbols
        std::cout << "Error" << std::endl;
        return;
    }

    //Start to convert
    bool isFirst = true;
    int cal = stoi(nums.front()); //Numeric result
    std::string res = nums.front(); //Store string result
    nums.pop();

    while(!nums.empty()){
        int curNum = stoi(nums.front());
        std::string curStr = nums.front();
        std::string curSym = syms.top();
        nums.pop();
        syms.pop();
        
        if(curSym == "+"){
            res += " + " + curStr;
            cal += curNum;
        }else if(curSym == "-"){
            res += " - " + curStr;
            cal -= curNum;
        }else if(curSym == "*"){
            if(isFirst){
                res += " * " + curStr;
            }else{
                res = "(" + res + ")" + " * " + curStr;
            }
            cal *= curNum;
        }else if(curSym == "/"){
            if(!curNum){
                std::cout << "Error" << std::endl;
                return;
            }
            if(isFirst){
                res += " / " + curStr;
            }else{
                res = "(" + res + ")" + " / " + curStr;
            }
            cal /= curNum;
        }
        isFirst = false;
    }

    std::cout << res << " = " << cal << std::endl;
}