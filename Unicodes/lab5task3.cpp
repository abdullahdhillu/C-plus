#include<iostream>
using namespace std;
int factorial(int n){
  int a,i,fact=1;
  for(i=1;i<=n;i++){
    fact = fact*i;
  }
  return fact;
}
int main(){
  int c,k;
  cout<<"Enter a number to find factorial : ";
  cin>>k;
  c = factorial(k);
  cout<<"Factorial is: "<<c;
  return 0;
}
