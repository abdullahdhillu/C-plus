#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n){
  if(n<=1){
    return false;
  }
  for(int i = 2; i<n; i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
int main()
{
  int a,b;
  cin>>a>>b;
  for(int num = a; num<=b; num++){
    if(is_prime(num)){
      cout<<num<<" ";
    }
  }
  return 0;
}
