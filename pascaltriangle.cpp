#include<iostream>
#include<cmath>
using namespace std;
int f(int n){
  int i, prod=1;
  for(i = 1; i<=n; i++ ){
    prod = prod*i;
  }
  return prod;
}
int main()
{
  char s;
  do{
    int i,j,nCr,n;
  cout<<"Enter input for pascals triangle : ";
  cin>>n;
  for(i=0;i<n;i++){
    for(int k = 1 ; k<=n+1-i; k++){
      cout<<" ";
    }
    for(j=0;j<=i;j++){
      nCr = f(i) / (f(i-j)*f(j));
      cout<<nCr<<" ";
    }
    cout<<endl;
  }
  cout<<"Do you want another Pascal Triangle? (y/n)";
  cin>>s;
  }while(s == 'y' || s=='Y');
    
  return 0;
}
