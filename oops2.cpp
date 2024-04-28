#include <iostream>
#include <string>
using namespace std;
class shop
{
  int itemID[10];
  int itemPrice[10];
  int counter;
  int i;

public:
  void setprice(void)
  {
    cout << "How many items do you have? ";
    cin >> counter;
    for (i = 1; i <= counter; i++)
    {
      cout << "Enter itemID for item " << i << " ";
      cin >> itemID[i];
      cout << "Enter Price of item " << i << " ";
      cin >> itemPrice[i];
    }
  }
  void displayprice(void)
  {
    for (i = 1; i <= counter; i++)
    {
      cout << "item ID for item "<< i <<" is "<< itemID[i] << " it's price is"
           << itemPrice[i] << endl;
    }
  }
};
int main()
{
  shop dukaan;
  dukaan.setprice();
  dukaan.displayprice();
}
