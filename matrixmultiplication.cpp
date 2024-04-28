#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n1,m1,n2,m2;
  cout<<"Enter No. of rows and columns for first matrix : ";
  cin>>n1>>m1;
  cout<<"Enter No. of rows and columns for second matrix : ";
  cin>>n2>>m2;
  if(m1 != n2){
    cout<<"Multiplication not Possible! ";
    return 0;
  }
  int matrix1[10][10] = {{1,2,3},
                         {4,5,6},
                         {7,8,9},
                         {10,11,12}};
  int matrix2[10][10] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};
  int answer[10][10] = {0};
  for(int i = 0 ; i < n1 ; i++){
    for(int j = 0 ; j < m2 ; j++ ){
     for (int k = 0; k < n2; k++) {
                answer[i][j] += matrix1[i][k] * matrix2[k][j];
            }
    }
  }
  for(int i = 0 ; i < n1 ; i++){
    for(int j = 0 ; j < m2 ; j++ ){
      cout<<answer[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
