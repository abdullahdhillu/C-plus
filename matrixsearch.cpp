#include<iostream>
#include<cmath>
using namespace std;
int main()
{  
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cin>>arr[i][j];
    }
  }
  int r = 0 , c = m-1;
  int target = 16;
  bool found = false;
  while(r<n && c>=0)
    {
      if(arr[r][c] == target ){
        found = true;
        break;
      }
       else if(arr[r][c] > target ){
        r++;
      }
      else{
        c--;
      }
    }
  if(found)
    cout<<"element found ";
  else
    cout<<"element not found";
  return 0;
}
