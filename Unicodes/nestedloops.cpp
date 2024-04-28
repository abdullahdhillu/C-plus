#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int hours,minutes,seconds;
  for(hours = 1; hours<24; hours++){
    for(minutes = 1; minutes<60; minutes++){
      for(seconds = 1; seconds<60; seconds++){
        cout<< setw(2) <<hours<<":";
        cout<< setw(2) <<minutes<<":";
        cout<< setw(2) <<seconds<<endl;
      }
    }
  }
  return 0;
}
