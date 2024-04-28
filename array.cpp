#include <iostream>
using namespace std;
int main()
{
  int i, j, row, col,max=0;
  cout << "Enter number of rows and columns : ";
  cin >> row >> col;
  int arr[row][col];
  // for user input
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << "Enter data in address : [" << i << "] [" << j<<"] ";
      cin >> arr[i][j];
    }
  }
  max = arr[0][0];
  // for output
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if(arr[i][j]>max){
        max = arr[i][j];
      }
      
      cout << arr[i][j]<<" ";
    }
    cout<<endl;

  }
cout<<"\n \n \n Now reversed matrix \n \n \n";
  for(i=row-1; i>=0 ; i--){
      for(j=col-1; j>=0 ; j--){
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }
  cout<<"Maximum is :"<<max<<endl;

  cout<<"------------------";
}

