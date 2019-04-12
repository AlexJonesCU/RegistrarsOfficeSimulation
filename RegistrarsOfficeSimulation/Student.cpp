#include "Student.h"

using namespace std;

Student::Student()
{
  //assuming there is no wait
  arrivalTime = 0;
  timeAtWindow = 5;
}
Student::Student(int arrival, int window)
{
  arrivalTime = arrival; //sets parameters to variables to work with
  timeAtWindow = window;
}
Student::~Student()
{
  //delete Student;
}
