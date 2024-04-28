#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n){
  int i;
  if(n<=1){
    return false;
  }
  for(i = 2; i<n;i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}
int main()
{
  int i;
  for(i = 1; i<=100; i++){
    if(i==1){
      cout<<1<<" ";
    }
    if(is_prime(i)){
      cout<<i<<" ";
    }
    else{
      continue;
    }
  }
  return 0;
}
