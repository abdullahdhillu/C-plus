#include<iostream>
#include<cmath>
using namespace std;

void fibonacci(int n){
  int i, t1=0, t2=1, nextelement;
  for(i=0;i<n;i++){
    cout<<t1<<" ";
    nextelement = t1 + t2;
    t1 = t2;
    t2 = nextelement;
  }
}
int main()
{
  int length_series;
  cout<<"Enter number of series you want : ";
  cin>>length_series;
  fibonacci(length_series); 
  return 0;
}
