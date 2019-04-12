//implementation

#include "DoublyLinkedList.h"
#include <iostream>
#include <string>

using namespace std;

Node::Node()
{
  elem = 10; //default tester element
  prev = NULL;
  next = NULL;
}
Node::Node(int elem)
{
  elem = elem;
  prev = NULL; //starts empty
  next = NULL;
}


DoublyLinkedList::DoublyLinkedList() //source: textbook
{
  size = 0;
  front = new Node;
  back = new Node;
  front->next = back;
  back->prev = front;
}

DoublyLinkedList::DoublyLinkedList(int length)
{
  size = length;
}

DoublyLinkedList::~DoublyLinkedList()
{
  delete front;
  delete back;
}

int DoublyLinkedList::getSize(){
  cout << "size: " << size << endl;
  return size;  }
bool DoublyLinkedList::empty(){
  return (size==0); }


void DoublyLinkedList::printList(Node* front) //for this method and next method source: https://www.youtube.com/watch?v=5s0x8bc9DvQ
{
  Node *curr = front;
  while(curr != NULL) //not pointing to NULL node
  {
    cout << curr->elem << endl;
    curr = curr->next;
  }
}

void DoublyLinkedList::printReverseList(Node* back)
{
  Node *curr = back; //same thing just starting at the back
  while(curr != NULL) //not pointing to NULL node
  {
    cout << curr->elem << endl;
    curr = curr->prev; //moves to the previous element
  }
}
void DoublyLinkedList::insertFront(int elem)
{

  //do not need to check if doubly linked list is full because it has dynamic memory
  Node *curr = new Node(elem);

  if(size == 0) //if list is empty the node and back point to the same spot
  {
    back = curr;
  }
  else
  {
    curr->next = front;
    front->prev = curr;
  }

  front = curr;
  size++;


}


void DoublyLinkedList::insertBack(int elem)
{
  Node* curr = new Node(elem);

  //checks if empty list
  if(size == 0)
    front = curr;
  else //not empty list
  {
    back->next = curr;
    curr->prev = back;
  }
  back = curr;
  size++;
}

int DoublyLinkedList::removeFront()
{
  if(getSize()==0)
  {
    cout << "List is empty." << endl;
  }

  Node *curr = front; //pointer to list node that is initialized at front
  //check if only one element exists
  if(front->next == NULL)
  {
    back = NULL;
  }
  else
  {
    front->next->prev = NULL;
  }
  front = front->next; //front points to next
  int temp = curr->elem;
  curr->next = NULL; //therefore node of next is NULL to delete
  cout << "deleted: " << curr->elem;

  delete curr;
  size--;

  return temp;
}


int DoublyLinkedList::remove(int key) //could use find method find()
//this is searching manually
{
  int index = 0; //the place the element is in in the list
  Node *curr = front;//start searching at the front



  while(index != key) //keep going until the current node points to the element that equals the key
  {
    curr = curr->next; //keeps looping and pointing to the next element in the list until match is found
    if(curr == NULL)//didnt find it so want end it
      throw "Element cannot be found in this list"; //loops all the way through the list to get to NULL meaning element is probably not in this list
    index++;
  }

  if(curr == front) //front node
  {
    front = curr->next; //removes front node
  }
  else
  {
    curr->prev->next = curr->next;
  }

  if(curr == back)
  {
    back = curr->prev;
  }
  else
  {
    curr->next->prev = curr->prev;
  }
  curr->next = NULL;
  curr->prev = NULL;

  size--;

  cout << "curr has been deleted: " << key << endl;

  delete curr; //deletes the element at the desired index
  //return entire pointer and delete it later //or delete it here

  return key;
}


//return the position if value exists
int DoublyLinkedList::find(int val)
{
  int idx = -1;
  Node *curr = front;
  cout << "found at " << val << endl;
  return val;
}


//another source I referenced was a java doubly linked list site, but it had a lot of similar processes that were helpful to conceptualize
//source: http://www.java2novice.com/data-structures-in-java/linked-list/doubly-linked-list/
