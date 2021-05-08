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
    Node* temp = head;
    if(position == 1){
        addFront(newItem);
        return;
    }

    for(int i = 0; i < position-2; i++){
        temp = temp->getNext();
        if(!temp) return;
    }

    Node* nxt = temp->getNext();
    temp->setNext(new Node(newItem));
    temp->getNext()->setNext(nxt);
}

int LinkedList::search(int item){
    Node* temp = head;
    int i = 1;
    while(temp){
        if(temp->getData() == item){
            std::cout << i << " ";
            return i;
        }
        temp = temp->getNext();
        i++;
    }
    return 0;
}

void LinkedList::deleteFront(){
    Node* temp = head;
    head = head->getNext();
    delete(temp);
}

void LinkedList::deleteEnd(){
    Node* temp = head;
    while(temp->getNext()){
        temp = temp->getNext();
    }
    delete(temp->getNext());
    temp->setNext(nullptr);
}

void LinkedList::deletePosition(int position){
    if(position <= 0)
        return;

    if(position == 1){
        deleteFront();
        return;
    }

    Node* temp = head;
    for(int i = 0; i < position-2; i++){
        head = head->getNext();
        if(!head)
            return;
    }
    Node* t = temp->getNext();
    temp->setNext(temp->getNext()->getNext());
    delete(t);
}

int LinkedList::getItem(int position){
    Node* temp = head;
    for(int i = 0; i < position; i++){
        temp = temp->getNext();
        if(!temp)
            return;
    }
    std::cout << temp->getData() << " ";
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