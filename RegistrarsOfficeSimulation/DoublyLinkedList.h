//header - user defined class
#include <iostream>
#include "Node.h"

using namespace std;

class DoublyLinkedList
{
  public:

    int size; //data members
    Node* front;
    Node* back;

    DoublyLinkedList();
    DoublyLinkedList(int length);
    ~DoublyLinkedList();
    void printList(Node* front);
    void printReverseList(Node* back);
    void insertFront(int elem);
    void insertBack(int elem);
    int removeFront();
    int remove(int key);
    int find(int val);



    //helper functions
    int getSize(); //list size
    bool empty(); //is the list empty- true or false

};
