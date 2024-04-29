#include<iostream>
#include<cmath>
int power(int n , int p){
  if(p==1){
    return n;
  }
  int prevPower = n*power(n, p-1);
  return n*prevPower;
}
using namespace std;
int main()
{
  cout<<power(2,5);
  return 0;
}
