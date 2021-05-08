#ifndef Node_H
#define Node_H

class Node{
    public:
        Node();
        Node(int d);
        Node(int d, Node* n);

        int getData();
        void setData(int d);
        Node* getNext();
        void setNext(Node* n);

    private:
        int data;
        Node* next;
};

#endif