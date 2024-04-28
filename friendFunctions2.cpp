#include <iostream>
#include <string>
using namespace std;
class complex; //forward declaration
class calculator
{
public:
  int c, d;
  int sumRealComplex(complex, complex);
  int sumCompComplex(complex, complex);
  void add(complex, complex);
};
class complex
{
  friend class calculator;

public:
  int a, b;
  void setNumber(int v1, int v2)
  {
    a = v1;
    b = v2;
  }
};
int calculator ::sumCompComplex(complex object1, complex object2)
{
  return (object1.b + object2.b);
}
int calculator ::sumRealComplex(complex object1, complex object2)
{
  return (object1.a + object2.a);
}
void calculator ::add(complex object1, complex object2)
{
  c = object1.a + object2.a;
  d = object1.b + object2.b;
  cout << "Entered complex number is " << c << " + " << d << "i" << endl;
}
int main()
{
  complex c1, c2;
  c1.setNumber(5, 2);
  c2.setNumber(8, 1);
  calculator calc;
  int res = calc.sumRealComplex(c1, c2);
  int res1 = calc.sumCompComplex(c1, c2);
  calc.add(c1, c2);
  cout << "Sum of real parts of object c1 and c2 is " << res << endl;
  cout << "Sum of imaginary parts of object c1 and c2 is " << res1 << endl;
  return 0;
}
