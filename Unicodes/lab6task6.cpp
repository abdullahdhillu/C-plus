#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n,row,col;
  for(row=1;row<=5;row++){
       n = 6-row;
    for(col=1;col<=6-row;col++){
      cout<<n<<" ";
      n = n-1;
    }
    cout<<endl;
  }
  return 0;
}
