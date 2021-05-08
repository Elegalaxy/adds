#include "LinkedList.h"

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(std::vector<int> vec, int n){
    Node* cur = head;
    for(int i = 0; i < n; i++){
        if(head){
            cur->setNext(new Node(vec[i]));
            cur = cur->getNext();
        }else{
            head = new Node(vec[i]);
        }
    }
}

void LinkedList::addFront(int newItem);
void LinkedList::addEnd(int newItem);
void LinkedList::addAtPosition(int position, int newItem);
int LinkedList::search(int item);
void LinkedList::deleteFront();
void LinkedList::deleteEnd();
void LinkedList::deletePosition(int position);
int LinkedList::getItem(int position);
void LinkedList::printItems();
