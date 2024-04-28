#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n, i, j, k;
  cout << "Enter size : ";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (k = n-i; k >= 1; k--)
    {
      cout << "   ";
    }
    for (j = 1; j <= i; j++)
    {
      cout << " * ";
    }
    cout<<endl;
  }
  return 0;
}
