#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cout << "Enter a number:";
  cin >> n;
  switch (n){
    case 1:
      cout << "Sunday";
      break;
    case 2:
      cout << "Monday";
      break;
    case 3:
      cout << "Tuesday";
      break;

    case 4:

      cout << "Wedsneday";
      break;

    case 5:

      cout << "Thursday";
      break;

    case 6:
      cout << "Friday";
      break;

    case 7:

      cout << "Saturday";
      break;

    default:

      cout << "Friday";
      break;
}
      return 0;
}
