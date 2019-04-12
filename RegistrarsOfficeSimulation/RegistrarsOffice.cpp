#include "RegistrarsOffice.h"
#include <iostream>
#include <string>
#include <fstream> //source: http://www.cplusplus.com/doc/tutorial/files/

using namespace std;

//calculations

void RegistrarsOffice::studentCalc()
{
  while (myQueue!=0) //returns the longest number in the queue
   {
     longest();
   }

   cout << "The longest time waited was " << maxTime;

}

double RegistrarsOffice::waitTime() //finds the average wait time by dividing sum by counter
{
  int sum;
  int counter;
  while (myQueue.front()!= 0)
  {
    sum += myQueue.front();
    myQueue.remove();
    counter++;
  }

  mean = sum / counter;
  cout << "the average wait time was " << mean;
  return mean;
}

int RegistrarsOffice::longest() //takes the times and returns the longest time
{
  if (myQueue.front() > myQueue.remove())
    myQueue.front() = maxTime;
  return maxTime;
}

int RegistrarsOffice::overTen() //only counts students wait over 10 min
{
  int tenCount
  if (myQueue.front() > 10)
  {
    tenCount++;
    myQueue.remove();
  }
}
