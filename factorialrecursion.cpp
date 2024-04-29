#include<iostream>
#include<cmath>
using namespace std;
int factorial (int n)
{
  if(n == 1) 
  {
    return 1;
  }
  int preFact = factorial(n-1);
  return n*preFact;
}
int main()
{
  cout<<factorial(7);
  return 0;
}
