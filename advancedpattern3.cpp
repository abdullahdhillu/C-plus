#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int row;
  cout<<"Enter input for pyramid : ";
  cin>>row;
  int i,j;
  for(i = 1; i<= row; i++){
    int space = row-i;
    for(j=1;j<=space;j++){
      cout<<" ";
    }
    for(j = 1; j<=i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}
