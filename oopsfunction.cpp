#include<iostream>
#include<string>
using namespace std;
class complex{
  int a,b;
  public: 
  void setData(int v1 , int v2){
    a = v1;
    b = v2;
  }
  void addComplex(complex o1 , complex o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b;
    cout<<a<<"+"<<b<<"i";

  }
};
int main()
{
  complex baby,adult,ali;
  baby.setData(2 , 1);
  adult.setData(3, 4);
  ali.addComplex(baby , adult);

 return 0;
}
