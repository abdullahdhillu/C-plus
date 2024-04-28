#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
  int rows,cols;
  cout<<"Enter rows and columns : ";
  cin>>rows>>cols;
  int arr[rows][cols];
  for (int  i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
        cout<<"Enter data in ["<<i<<"]["<<j<<"] : ";
        cin>>arr[i][j];
    }
  }
  cout<<"\n \n \n ";
  for (int  i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
        cout<<"Value at ["<<i<<"]["<<j<<"] is : ";
        cout<<arr[i][j]<<endl;
    }
  }
  
  return 0;
}
