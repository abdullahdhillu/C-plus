#include<iostream>
#include<string>
using namespace std;
int main()
{
  int i,j;
  for(i=1;i<=4;i++){
    for(j=1;j<=(2*i -1);j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
