//header - user defined class
#include <iostream>
#include "GenQueue.h"

using namespace std;


class ReadTheFile
{
  public:
    //constructors and destructors
    ReadTheFile(); //constructor
    ReadTheFile(int num); //overloaded constructor
    ~ReadTheFile(); //destructor

    //functions
    void getName();
    void readLines();



    //local variables
    int c;
    string theName;
    int nameNum;
    int counter;
    int data;
    int windowsOpen;
    int timeTickOne;
    int numberOfStudents;
    int studentMinutes;

    //array to store data in stack
    char *fileArray; //this makes a pointer - declaring a pointer to a char
    char *student;
};
