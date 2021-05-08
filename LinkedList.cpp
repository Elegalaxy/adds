#include "LinkedList.h"
#include <iostream>

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

void LinkedList::addFront(int newItem){
    Node* temp = new Node(newItem, head);
    head = temp;
}

void LinkedList::addEnd(int newItem){
    while(head->getNext()){
        head = head->getNext();
    }
    head->setNext(new Node(newItem));
}

void LinkedList::addAtPosition(int position, int newItem){
    for(int i = 0; i < position-1; i++){
        
    }
}

int LinkedList::search(int item){

}

void LinkedList::deleteFront(){

}

void LinkedList::deleteEnd(){

}

void LinkedList::deletePosition(int position){

}

int LinkedList::getItem(int position){

}

void LinkedList::printItems(){
    if(!head) return;
    while(head){
        std::cout << head->getData() << " ";
        head = head->getNext();
    }
    std::cout << std::endl;
}

LinkedList::~LinkedList(){
    while(head){
        Node* temp = head->getNext();
        delete(head);
        head = temp;
    }
}