#include<iostream>
#include<string>
using namespace std;
int main()
{
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=9-2*i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
