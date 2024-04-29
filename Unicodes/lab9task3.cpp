#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int rows,cols,min=0;
  cout<<"Enter rows and columns : ";
  cin>>rows>>cols;
  int arr[rows][cols];
  cout<<"Enter "<<rows*cols<<" values in first matrix: "<<endl;
  for (int  i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
        cin>>arr[i][j];
    }
  }
  min = arr[0][0];
  for (int  i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
        if(min>arr[i][j]){
          min = arr[i][j];
        }
    }
  }
  cout<<"Smallest value in matrix is : "<<min;
  return 0;
}
