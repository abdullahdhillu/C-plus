#include<iostream>
#include<cmath>
using namespace std;
bool factorial(int n){
  int i,fact =1 ;
  for(i=1;i<=n;i++){
    fact = fact* i;
  }
  return fact;
}
int main()
{
  int a;
  a = factorial(5);
  cout<<a;
  return 0;
}
