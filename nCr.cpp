#include<iostream>
#include<cmath>
using namespace std;
int f(int n){
  int i, prod=1;
  for(i = 1; i<=n; i++ ){
    prod = prod*i;
  }
  return prod;
}
int main()
{
  int n,r,nCr;
  cout<<"Enter n : ";
  cin>>n;
  cout<<"Enter r : ";
  cin>>r;
  nCr = f(n) / (f(n-r)*f(r));
  cout<<nCr;
  return 0;
}
