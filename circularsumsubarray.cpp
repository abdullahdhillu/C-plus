#include <iostream>
#include <climits>
using namespace std;
int kadane(int arr[], int n){
  int currSum = 0;
  int maxSum = INT_MIN;
  for(int i = 0 ; i < n ; i++){
    currSum += arr[i];
    if(currSum<0){
      currSum = 0;
    }
    if(maxSum < currSum){
    maxSum = currSum;
    }
  }
  return maxSum;
}
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  int arr[n];
  int SumOfArray = 0;
  int wrapsum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    SumOfArray += arr[i];
  }
  int maxNonWrappingSum = kadane(arr, n);
  for (int i = 0; i < n; i++) 
  {
    arr[i] = -arr[i];
  }
  wrapsum = SumOfArray + kadane(arr , n);
  cout<<"Circular Sum = "<<max(wrapsum ,maxNonWrappingSum) ;
  return 0;
}
