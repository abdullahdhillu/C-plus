#include<iostream>
using namespace std;
void printsubarrays(int arr[],int n ){
  int count = 0;
  for(int i = 0 ; i < (1<<n) ; i++ ){
    for(int j = 0 ; j < n ; j++ ){
      if(i & (1<<j)){
        cout<<arr[j]<<" ";
      }
    }
    cout<<endl;
    count++;
  }
  cout<<"Total sub arrays "<<count;
}
int main()
{
    int array[4] = {6,5,4,3};
    printsubarrays(array , 4 );
    return 0 ;
}
