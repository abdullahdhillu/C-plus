
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n, i;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  const int N = 500;
  int rep[N];
  fill_n(rep, N, -1);
  for (i = 0; i < n; i++)
  {
    if (rep[arr[i]] == -1)
    {
      rep[arr[i]] = 1;
    }
    else
    {
      rep[arr[i]]++;
    }
  }
  for (int i = 0; i < N; i++)
  {
    if (rep[i] != -1)
    {
      cout << "Number " << i << " occurs " << rep[i] << " times." << endl;
    }
  }

  return 0;
}
