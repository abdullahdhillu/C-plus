
#include <iostream>
using namespace std;
int main()
{
  int n, i, j, mx, days = 0;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  mx = 0;
  for (i = 0; i < n; i++)
  {
    if (mx < arr[i])
    {
      mx = arr[i];
      if ((i != n - 1) && mx > arr[i + 1])
      {
        cout << "Record Breaking day with "<< mx <<" visitors"<< endl;
        days++;
      }
    }
  }
 if (mx == arr[n - 1]) {
        cout << "Record Breaking day with "<< mx <<" visitors"<< endl;
        days++;
    }
  cout << "Total Record Breaking Day are " << days << endl;
  
  return 0;
}
