#include<iostream>
#include<string>
using namespace std;
class complex{
  int a,b;
  public:
  friend complex addSum(complex o1 , complex o2);
    void setData(int v1, int v2){
      a = v1;
      b = v2;
    }
    void printData(){
      cout<<a<<" + "<<b<<"i"<<endl;
    }
};
complex addSum(complex o1 , complex o2){
  complex o3;
  o3.setData((o1.a + o2.a) , (o1.b + o2.b));
  return o3;
}
int main()
{
  complex c1,c2,sum;
  c1.setData(3, 5);
  c1.printData();
  c2.setData(1, 6);
  c2.printData();
  sum = addSum(c1 , c2);
  sum.printData();
 return 0;
}
