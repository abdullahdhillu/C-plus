#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int i,j,row;
  cout<<"Enter input : ";
  cin>>row;
  for(int i = 1; i<=3; i++){
    for(int j = 1; j<=row; j++){
      if(((i+j)%4==0 ) || (i==2 && j%2==0)){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
      
    }
    cout<<endl;
  }
  return 0;
}
