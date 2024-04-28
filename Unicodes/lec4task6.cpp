#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int i,e,difference;
  cout<<"Enter issue date :";
  cin>>i;
  cout<<"Enter expiry date :";
  cin>>e;
  difference = e-i;
  if(difference <= 7){
    cout<<"No fine will be implemented on you ";
  }
  else if (difference > 7 && difference < 30){
    cout<<"750rs Fine will be implemented on you ";
  }
  else{
    cout<<"Invalid Input";
  }
  return 0;
}
