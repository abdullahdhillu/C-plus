#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int current,i,j,n,arr[n];
  cin>>n;
  for(i = 0; i<n; i++){
    cin>>arr[i];
  }
  for(i = 1; i<n; i++){
    current = arr[i];
    j = i-1;
    while( current < arr[j] && j>=0){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = current;
  }
  for(i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
