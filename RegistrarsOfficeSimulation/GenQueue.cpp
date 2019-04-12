#include "GenQueue.h"
#include <iostream>

using namespace std;

GenQueue::GenQueue()
{
  myQueue = new char[100]; //if no size is declared this is the default size

  mSize = 100;
  numElements = 0; //Queue is empty to start
  head = 0; //head starts at first index
  tail = -1; //where we enter from
}

GenQueue::GenQueue(int maxSize)//overloaded constructor
{
  myQueue = new char[maxSize];

  mSize = maxSize;
  numElements = 0; //nothing in there yet
  head = 0; //head of queue starts at first index
  tail = -1; //where we enter from
}

GenQueue::~GenQueue() //source: https://www.geeksforgeeks.org/destructors-c/
{
  delete []myQueue;  //needed if we have dynamically allocated memory or pointer
}

void GenQueue::insert(char d)
{
  if (isFull())
  {
    throw "Error! Queue is full";
  }
  else
  {
    myQueue[++tail] = d; //inserting
    ++numElements;
  }
}

char GenQueue::remove()
{
  char c = '\0'; //char c initialized to null character

  if(isEmpty())
  {
    throw "Error! Queue is empty";
  }
  else
  {
    c = myQueue[head];

    ++head;
    numElements--;
  }
  return c;
}

char GenQueue::front(){
  return myQueue[head]; }

bool GenQueue::isFull(){
  return (numElements == mSize); }

bool GenQueue::isEmpty(){
  return (numElements == 0); }

int GenQueue::getSize(){
  return numElements; }
