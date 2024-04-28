#include <iostream>
using namespace std;
int main()
{
  int i, j, rem5, rem7;
  for (i = 1; i <= 200; i++)
  {
    rem5 = i % 5;
    rem7 = i % 7;
    if (rem5 == 0 && rem7 == 0)
    {
      cout << i << " ,";
    }
  }

  return 0;
}
