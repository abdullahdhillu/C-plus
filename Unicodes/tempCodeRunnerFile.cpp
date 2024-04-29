#include<iostream>
#include<cmath>
using namespace std;
bool oddeven(int n){
  if(n%2 == 0){
    return true;
  }
  else{
    return false;
  }
}
using namespace std;
int main()
{
  int a;
  cout<<"Enter a number to check wether its odd or even ";
  cin>>a;
  if(a >= 1){
     if(oddeven(a)){
    cout<<"Entered number is even";
    }
    else{
    cout<<"Entered number is odd";
    }
  }
  else{
    cout<<" Invalid input ";
  }
 

  return 0;
}
