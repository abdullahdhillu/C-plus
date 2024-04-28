#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
  int rows,cols;
  cout<<"Enter rows and columns : ";
  cin>>rows>>cols;
  int arr1[rows][cols];
  int arr2[rows][cols];
  cout<<"Enter "<<rows*cols<<" values in first matrix: "<<endl;
  for (int  i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
        cin>>arr1[i][j];
    }
  }

  cout<<"Enter "<<rows*cols<<" values in second matrix: "<<endl;
  for (int  i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
        cin>>arr2[i][j];
    }
  }
  cout<<"Subtraction Matrix : "<<endl;
  for (int  i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
        cout<<arr1[i][j] - arr2[i][j] <<"\t";
    }
    cout<<endl;
  }
  
  return 0;
}
