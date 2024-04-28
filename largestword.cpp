#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n, i = 0;
  std::cout << "Enter Size : ";
  cin >> n;
  cin.ignore();
  char words[n + 1];
  cin.getline(words, n + 1);
  cin.ignore();
  int currLen = 0, maxLen = 0;
  while (words[i] != '\0')
  {
    if (words[i] == ' ')
    {
      if (currLen > maxLen)
      {
        maxLen = currLen;
      }
      currLen = 0;
    }
    else
    {
      currLen++;
    }

    i++;
  }
  if (currLen > maxLen)
  {
    maxLen = currLen;
  }

  std::cout << "Length of the longest word: " << maxLen << endl;
  return 0;
}
