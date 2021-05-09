#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main(){
    string s;
    getline(cin, s); //Get input in full line

    string temp = ""; //Get current parse string
    bool start = true; //Starting vector or not
    string func = ""; //Current required function name
    int p1, p2; //Parameter for current function
    int count = 0; //Function or parameter are we taking
    int n = 0; //Size of Linkedlist

    vector<int> vec;
    LinkedList* list; //Head of linkedlist

    for(int i = 0; i <= s.length(); i++){
        if(i == s.length() || s[i] == ' '){ //If we got a full string
            if(start){ //If this is initial value
                vec.push_back(stoi(temp));
                n++;

                //When we got all initial value
                if(i < s.length() && (s[i+1] >= 'A' && s[i+1] <= 'Z')){
                    list = new LinkedList(vec, n); //Create new LinkedList
                    start = false;
                }
            }else{ //If we start to take function and parameter
                if(!count){ //When this string is function name
                    func = temp;
                }else if(count == 1){ //First parameter
                    p1 = stoi(temp);
                }else if(count == 2){ //Second parameter
                    p2 = stoi(temp);
                    count = -1;
                    
                    //Call function base on function name and parameter
                    if(func == "AF"){
                        list->addFront(p1);
                    }else if(func == "AE"){
                        list->addEnd(p1);
                    }else if(func == "AP"){
                        list->addAtPosition(p1, p2);
                    }else if(func == "S"){
                        list->search(p1);
                    }else if(func == "DF"){
                        list->deleteFront();
                    }else if(func == "DE"){
                        list->deleteEnd();
                    }else if(func == "DP"){
                        list->deletePosition(p1);
                    }else if(func == "GI"){
                        list->getItem(p1);
                    }else{ //In case got error
                        cout << "ERROR" << endl;
                    }
                }
                count++;
            }
            temp = ""; //Reset parse string everytime after we process the string
        }else{
            temp += s[i];
        }
    }

    list->printItems();
    return 0;
}