#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Size ";
  cin>>n;
  char arr[n+1];
  bool check = true;
  cout<<"Enter a string : ";
  cin>>arr;
  for(int i = 0 ; i < sizeof(arr)/2 ; i++){
    if(arr[i] != arr[n-i-1]){
      check = false;
      break;
    }
  }
  if(check){
    cout<<"Palindrome ";
  }
  else{
    cout<<"Not Palindrome ";
  }
  return 0;
}
