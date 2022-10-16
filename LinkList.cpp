#include "LinkList.h"
#include "Node.h"

using namespace std;

LinkList::LinkList() { this->head = new Node; }

void LinkList::addFront(int newItem) {

    Node newNode;

    newNode.setData(newItem);
    newNode.setNext(head);
    head = &newNode;

}

void LinkList::addEnd(int newItem) {

    Node newNode;

    newNode.setData(newItem);
    
}

void LinkList::addAtPosition(int position, int newItem) {

    Node *temp = head;

    for(int i = 0; i<position; i++) {

        temp = temp->getNext();
    }

}

int LinkList::search(int item) {

    Node *temp = head;

    while(temp!=nullptr && temp->getData()!=item) {

            temp = temp->getNext();
    }

    if(temp->getData() == item) {
        return temp->getData();
    } else {
        return 0;
    }
   

}