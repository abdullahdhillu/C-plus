#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int  num;
  cout<<"Enter a number : ";
  cin>>num;
  if(num > 0){
    cout<<"Positive ";
  }
  else if (num < 0){
    cout<<"Negative ";
  }

  else{
    cout<<"You entered zero";
  }
  return 0;
}
