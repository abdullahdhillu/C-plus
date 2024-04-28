#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int m;
  float p;
  cout<<"Input the number of labs you have attended ";
  cin>>m;
  p = (m/14.00)*100;
  cout<<p<<endl;
  if(p>=70){
    cout<<"You can give final exam";
  }
  else if(p>=60 || p<=70){
    cout<<"Your attendance is short";
  }
  else if(p<60){
    cout<<"try again in next semester ";
  }
  return 0;
}
