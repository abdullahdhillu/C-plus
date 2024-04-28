#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int row=15;
  int i,j;
  for(i=1;i<=row;i++){
    int space = row - i;
    for(j=1;j<=space;j++){
      cout<<"  ";
    }
    for(j=1;j<=(2*i)-1;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(i=row;i>=1;i--){
    int space = row - i;
    for(j=1;j<=space;j++){
      cout<<"  ";
    }
    for(j=1;j<=(2*i)-1;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}
