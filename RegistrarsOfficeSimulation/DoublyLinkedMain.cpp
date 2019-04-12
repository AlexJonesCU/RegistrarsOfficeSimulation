#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  try
  {
    DoublyLinkedList listOne;

    Node* front;
    Node* back;
    Node* n;

    n = new Node;
    n->elem = 1;
    n->prev = NULL;
    front = n;
    back = n;

    n = new Node;
    n->elem = 2;
    n->prev = back;
    back->next = n;
    back = n;

    n = new Node;
    n->elem = 3;
    n->prev = back;
    back->next = n;
    back = n;


    listOne.insertFront(2);
    listOne.insertFront(4);
    listOne.insertFront(9);
    listOne.insertBack(12);
    listOne.insertBack(15);
    listOne.insertBack(18);
    listOne.insertBack(22);


  //  listOne.getSize();
  /*
    n = new Node;
    n->elem = 4;
    n->prev = back;
    back->next = n;
    back = n;
    back->next = NULL;
  */
    listOne.printList(front);
    listOne.printList(front);
    cout << endl;
    //listOne.printReverseList(back);
    //listOne.printList(front);


  ///  listOne.remove(2);
  //  listOne.removeFront();
  //  listOne.printList(front);

    cout << endl;
  }

  catch (const char* msg) //source: https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm
  {
    cout << msg << endl;
  }

  return 0;
}
