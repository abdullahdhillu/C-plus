#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int factorial(int n){
  int product = 1;
  for(int index = 1; index<=n; index++){
    product = product * index;
  }
  return product;
}
int main()
{
  long  n,m,a1,b1,c1,d1,e1,f1,g1, h1,answer;
  cout<<"Enter n and m"<<endl;
  cin>>n>>m;
  a1 = pow(n, 5);
  cout<<a1<<endl;
  b1 = factorial(a1);
  cout<<b1<<endl;
  c1 = factorial(m);
  cout<<c1<<endl;
  d1 = pow(c1 , 2);
  cout<<d1<<endl;
  e1 = pow(d1 , factorial(3));
  cout<<e1<<endl;
  f1 = pow(b1 , factorial(4) + c1) + e1;
  cout<<f1<<endl;
  g1 = pow(m , 4);
  cout<<g1<<endl;
  h1 = pow(m , pow(n , 2));
  cout<<h1<<endl;
  answer = f1 + g1 + h1;
  cout<<answer;
  return 0;
}
