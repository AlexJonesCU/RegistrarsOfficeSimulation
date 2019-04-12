#include <iostream>

using namespace std;

class Student
{
  public:

    //function
    Student();
    Student(int arrival, int window); //time in clock ticks
    ~Student();

    //variables
    int arrivalTime;
    int timeAtWindow;
}
