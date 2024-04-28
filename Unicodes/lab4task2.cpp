#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int  num;
  cout<<"Enter a number : ";
  cin>>num;
  if(num%2==0){
    cout<<"Even ";
  }
  else if (num%2!=0){
    cout<<"odd ";
  }
  else{
    cout<<"Zero ";
  }
  return 0;
}

