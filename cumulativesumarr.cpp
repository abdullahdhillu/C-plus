//cumulative sum array

#include<iostream>
using namespace std;
int main()
{
  int arr[8] = {45,65,1,3,12,4,82,90};
  int brr[8];
  brr[0] = arr[0];
  for(int i =1;i<8;i++){
    brr[i] = brr[i-1] + arr[i];
  }
 cout<<"Normal Array : ";
  for(int i =0;i<8;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;
cout<<"Cumulative array : ";
for(int i =0;i<8;i++){
    cout<<brr[i]<<" ";
}
return 0;
}

