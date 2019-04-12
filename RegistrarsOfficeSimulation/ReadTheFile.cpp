//implementation

#include "ReadTheFile.h"

#include <iostream>
#include <string>
#include <fstream> //source: http://www.cplusplus.com/doc/tutorial/files/

using namespace std;

ReadTheFile::ReadTheFile() //default constructor
{}

ReadTheFile::ReadTheFile(int num)
{
    nameNum = num;
}

ReadTheFile::~ReadTheFile()//destructor
{
  delete []fileArray; // source: https://www.geeksforgeeks.org/destructors-c/
}

void ReadTheFile::getName()
{
  cout << "What is the name of the txt file you wish to check?" << endl;
  cin >> theName;
  readLines();
}

void ReadTheFile::readLines()
{
  counter = 0;
  int i = 0;
  int j = 0;

  string line;// try"int line;"
  int fileArray[10];
  int student[10];

  int myQueue(10);

  ifstream readFile (theName);
  if(readFile.is_open())
  {
    while (getline (readFile, line)) //source: http://www.cplusplus.com/doc/tutorial/files/
    {
      data = atoi(line.c_str()); //source: https://stackoverflow.com/questions/19259418/read-from-a-file-then-convert-from-to-int

      fileArray[i] = data;
      counter++; //to keep track of the amount of elements in the array
      //cout << "Windows: " << fileArray[i] << endl;
      i++;
    }
  }
  readFile.close();
  cout << "Counter " << counter << endl;

  windowsOpen = fileArray[j]; //this is always true first int in list is amount of windows open
  while(fileArray[j] != 0) //not NULL
  {
    timeTickOne = fileArray[++j]; //iterates through j
    numberOfStudents = fileArray[++j];
    //need to compare this to previous number of students and not sure how

    for(int m = 0; m < numberOfStudents; ++m)
    {
      //PUT THEM IN QUEUE
      student[m] = fileArray[++j];
      c = fileArray[j];
      myQueue.insert(c);
    }
  }
}
