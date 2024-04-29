#include<iostream>
#include<cmath>
int timesTen(int n){
  return pow(n , 10);
}
using namespace std;
int main()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  int c = timesTen(num);
  cout<<c;
  return 0;
}
