#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int rem,n,q=0;
  cin>>n;
  while(n>0){
    rem = n%2;
    cout<<rem;
    n=n/2;
  }
  cout<<endl;

  return 0;
}
