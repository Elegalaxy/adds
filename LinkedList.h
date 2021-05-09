#ifndef LinkedList_H
#define LinkedList_H
#include "Node.h"
#include <vector>

class LinkedList{
    public:
        LinkedList();
        LinkedList(int vec[], int n);
        void addFront(int newItem);
        void addEnd(int newItem);
        void addAtPosition(int position, int newItem);
        int search(int item);
        void deleteFront();
        void deleteEnd();
        void deletePosition(int position);
        int getItem(int position);
        void printItems();
        ~LinkedList();

        Node* head;
};

#endif