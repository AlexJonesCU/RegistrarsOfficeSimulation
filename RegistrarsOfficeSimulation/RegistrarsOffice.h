//header - user defined class
#include <iostream>
#include "ReadTheFile.h" //in order to use this class
#include "GenQueue.h"

using namespace std;

class RegistrarsOffice
{
  public:
    void timeCalc();
    void studentCalc();
    int longest();
    int overTen();
    double waitTime();



    int maxTime;
    double mean;
};
