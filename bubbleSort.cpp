#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,arr[n],i;
  cout<<"Enter size of array ";
  cin>>n;
  for(i = 0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Unsorted array : ";
  for(i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int counter = 0;
  while(counter < n){
    for(i =0; i<counter; i++){
      if(arr[i] > arr[i+1]){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
      }
    }
    counter++;
  }
  cout<<"Sorted array : ";
  for(i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
