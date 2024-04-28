#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int num1,num2,num,i,count,sum,digit;
  cout<<"Enter first number : ";
  cin>>num1;
  cout<<"Enter second number : ";
  cin>>num2;
  bool found = false;
  if(num1>num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
  }
  for(i=num1; i<=num2; i++){
    count = 0;
    num = i;
    while(num>0){
      ++count;
      num = num/10;
    }
    sum = 0;
    num = i;
    while(num>0){
      digit = num%10;
      sum += pow(digit , count);
      num = num/10;
    }
    if(sum==i){
      cout<<i<<" ";
      found = true;
    }
    
    }
    if(!found){
      cout<<"none!";
  }
  return 0;
}
