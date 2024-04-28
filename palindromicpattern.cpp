#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int row,i,j,k,l;
  cout<<"Enter input for palindrome : ";
  cin>>row;
  for(i=1; i<=row; i++){
    int space = row-i;
    for(j=1;j<=space;j++){
      cout<<"  ";
    }
    for(k=i;k>=1;k--){
      cout<<k<<" ";
    }
    for(l=2;l<=i;l++){
      cout<<l<<" ";
    }
    cout<<endl;
  }
  return 0;
}
