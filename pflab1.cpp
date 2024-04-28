#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int arr[5][3];
  int row,col;
  for (row = 0; row < 5; row++)
  {
    for (col = 0; col < 3; col++)
    {
      cout <<arr[row][col]<<" ";
      
    }
    cout << endl;
  }
  return 0;
}
