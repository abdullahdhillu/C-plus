#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int i,j,n,arr[n];
  cout<<"Number of elements ";
  cin>>n;
  for(i=0; i<n; i++ ){
    cin>>arr[i];
  }
  for(i = 0; i<n-1; i++){
    for(j = i+1; j<n; j++){
      if(arr[j]>arr[i]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  for(i=0; i<n; i++ ){
    cout<<arr[i]<<" ";
  }
  
      return 0;
  }

