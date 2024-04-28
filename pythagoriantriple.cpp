#include<iostream>
#include<math.h>
using namespace std;
bool pythagorian(int a, int b, int c){
  int sq_a,sq_b,sq_c;
  sq_a = pow(a,2);
  sq_b = pow(b,2);
  sq_c = pow(c,2);
  if(sq_a + sq_b == sq_c){
    return true;
  }
  else{
    return false;
  }
}
int main()
{
  int a=11,b=60,c=61;
  bool d = pythagorian(a,b,c);
  if(d){
    cout<<"Pythagorian ";
  }
  else{
    cout<<"Not a Pythagorian ";
  }
  return 0;
}
