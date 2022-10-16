#ifndef _LinkList
#define _LinkList

#include "Node.h"

class LinkList {
    private:
        Node* head;

    public:
        LinkList();
        LinkList(int array[], int size);
        
        void addFront(int newItem);
        void addEnd(int newItem);
        void addAtPosition(int position, int newItem);
        int search(int item);
        void deleteFront();
        void deleteEnd();
        void deletePosition(int position);
        int getItem(int position);
        void printItems();



};

#endif