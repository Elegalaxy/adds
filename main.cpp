#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){
    vector<int> vec = {1,2,3};
    LinkedList* list = new LinkedList(vec, 3);

    list->addFront(0);
    list->printItems();
    list->addEnd(4);
    list->printItems();
    list->addAtPosition(2, 10);
    list->printItems();

    list->search(2);
    list->search(20);

    list->deleteFront();
    list->printItems();
    list->deleteEnd();
    list->printItems();
    list->deletePosition(3);
    list->printItems();

    return 0;
}