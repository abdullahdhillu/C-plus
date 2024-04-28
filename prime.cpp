#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n){
  if(n <=1){
    return false;
  }
  for(int i = 2; i<=sqrt(n); i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  for(int index = 2; index<=n; index++){
    if(is_prime(index)){
      cout<<index<<" ";
    }
  }
  return 0;
}
