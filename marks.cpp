#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter first number : ";
  cin>>a;
  cout<<"Enter second number : ";
  cin>>b;
  cout<<a<<" + "<<b<<" = "<<a+b<<endl;
  cout<<a<<" - "<<b<<" = "<<a-b<<endl;
  cout<<a<<" * "<<b<<" = "<<a*b<<endl;
  cout<<a<<" / "<<b<<" = "<<static_cast<float>a/b<<endl;
  cout<<a<<" % "<<b<<" = "<<a%b<<endl;
  return 0;
}