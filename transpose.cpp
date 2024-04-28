#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,m;
  cout<<"Enter rows and columns ";
  cin>>n>>m;
  int arr[n][m];
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        cin>>arr[i][j];
    }
  }
cout<<"Normal Matrix : "<<endl; 
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
 int transpose[m][n];
   for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        transpose[j][i] = arr[i][j];
    }
  }
  cout<<"Transpose of Matrix : "<<endl; 
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
