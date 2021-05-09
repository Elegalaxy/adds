#include "LinkedList.h"
#include <iostream>
#include <climits>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(int vec[], int n){
    Node* cur = head;
    for(int i = 0; i < n; i++){
        if(head){
            cur->setNext(new Node(vec[i]));
            cur = cur->getNext();
        }else{
            head = new Node(vec[i]);
            cur = head;
        }
    }
}

void LinkedList::addFront(int newItem){
    Node* temp = new Node(newItem, head);
    head = temp;
}

void LinkedList::addEnd(int newItem){
    Node* temp = head;
    while(temp->getNext()){
        temp = temp->getNext();
    }
    temp->setNext(new Node(newItem));
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

    std::cout << 0 << " ";
    return 0;
}

void LinkedList::deleteFront(){
    Node* temp = head;
    head = head->getNext();
    delete(temp);
}

void LinkedList::deleteEnd(){
    Node* temp = head;
    while(temp->getNext()->getNext()){
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
        temp = temp->getNext();
        if(!temp)
            return;
    }
    Node* t = temp->getNext();
    temp->setNext(temp->getNext()->getNext());
    delete(t);
}

int LinkedList::getItem(int position){
    if(position <= 0){
        std::cout << INT_MAX << " ";
        return INT_MAX;
    }
    Node* temp = head;
    for(int i = 0; i < position-1; i++){
        temp = temp->getNext();
        if(!temp){
            std::cout << INT_MAX << " ";
            return INT_MAX;
        }
    }
    std::cout << temp->getData() << " ";
    return temp->getData();
}

void LinkedList::printItems(){
    Node* temp = head;
    if(!temp) return;
    while(temp){
        std::cout << temp->getData() << " ";
        temp = temp->getNext();
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