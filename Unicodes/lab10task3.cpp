#include<iostream>
#include<cmath>
double area(int& p){
  double aoc = (3.14)*pow(p,2);
  return aoc;
}

using namespace std;
int main()
{
  int r;
  cout<<"Enter radius of a circle: ";
  cin>>r;
  int areaa = area(r);
  cout<<areaa;

  return 0;
}
