#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,j,avg = 0;
  for(n=1; n<=10; n++)
  {
    cout<<"Enter "<<n<<" Number : ";
    cin>>j;
    avg = avg + j;
  }
  avg = avg/10;
  cout<<"The average is "<<avg;
  return 0;
}
