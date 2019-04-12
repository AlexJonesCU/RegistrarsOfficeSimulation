#include <iostream>

using namespace std;

struct Node //node object //source: textbook
{
  int elem; //value of element
  Node* prev; //node pointer that points to previous node in list
  Node* next; //node pointer points to next in list

  Node();
  Node(int elem);
};
