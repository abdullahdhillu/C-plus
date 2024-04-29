#include<iostream>
#include<cmath>
int seriessum(int n){
  if(n == 0){
    return 0;
  }
  int prev =  seriessum(n-1);
  return n+prev;
}
using namespace std;
int main()
{
  cout<<seriessum(100);
  return 0;
}
