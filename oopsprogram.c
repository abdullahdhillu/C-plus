#include <iostream.h>
#include <string>
using namespace std;

class ali
{
public:
int i;
  string s;
  void read(void)
  {
    cout << "Enter a binary string : ";
    cin >> s;
  }
  void check_bin(void)
  {
    for (i = 0; i < s.length(); i++)
    {
      if ((s.at(i) != '0') && (s.at(i) != '1'))
      {
        cout << "It is an Invalid format";
        exit(0);
        break;
      }
      else
      {
        cout << "It is a correct format "<<endl;

        break;
      }
    }
  }
  void reverse(void){
      check_bin();
          for (i = 0; i < s.length(); i++){
              if(s.at(i) == '0'){
                  s.at(i) = '1';
              }
              else if (s.at(i) == '1'){
                  s.at(i) = '0';
              }
          }
          cout<<"Reversed string : "<< s;
  }
};
int main()
{
  ali a;
  int y;
  a.read();
  a.reverse();
  return 0;
}

