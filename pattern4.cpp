#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n,i,j,k;
  cout<<"Enter size:";
  cin>>n;
  for(i=n;i>=1;i--){ 
    for(k=n-i;k>=1;k--) 
    cout<<" ";
  for(j=i;j>=1;j--){ 
    cout<<"*"; // *
  }
  cout<<endl;
}
  return 0;
}
