//when working with template classes - implementation in header file - node and implementation same definition.. research why
#include <iostream>

using namespace std;

class GenQueue
{
    public:
      GenQueue(); //default constructor
      GenQueue(int maxSize); //overloaded constructor
      ~GenQueue();

      void insert(char d); //aka enqueue()
      char remove(); //aka dequeue() - return type is a char for this
      char front(); //aka peak()

      bool isFull();
      bool isEmpty();
      int getSize();

      int mSize;
      int head; //front of queue
      int tail; //rear of queue
      int numElements;

      char *myQueue; //data structure
};
