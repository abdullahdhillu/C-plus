#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i, g, count = 0, largest = 0;
  string str;
  cout << "Enter data in string ";
  getline(cin, str);
  g = str.length();
  for (i = 0; i < g; i++)
  {
    if (str[i] == ' ')
    {
      if (count > largest)
      {
        largest = count;
      }
      count = 0;
    }
    else
    count++;
  }
  if(count > largest){
      largest = count;
  }
  cout << "The length of largest word is" << largest;
}
