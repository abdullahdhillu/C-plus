#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int row,col,num=1;
  for(row=1;row<=5;row++){
    for(col=1;col<=row;col++){
      cout<<num<<" ";
      num++;
    }
    cout<<endl;
  }
  return 0;
}
