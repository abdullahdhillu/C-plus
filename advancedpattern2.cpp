#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int i,j,row=5,col=9,rem;
    for(i=1;i<=row;i++){
      int space = 5 - i ;
      for(j=1;j<=space;j++){
        cout<<"  "; 
    }
      for(j=1;j<=col;j++){
        cout<<" * ";
    }
    cout<<endl;
  }
  return 0;
}
