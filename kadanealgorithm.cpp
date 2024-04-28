#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,arr[n];
  cin>>n;
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  int currSum = 0;  //-1 4 -6 7 -4
  int max_end=0;
  for(int i = 0 ; i < n ; i++){
    currSum += arr[i];
    if(currSum<0){
      currSum = 0;
    }
    if(max_end < currSum){
      max_end = currSum;
    }
  }
  cout<<"max = "<<max_end;
  return 0;
}
