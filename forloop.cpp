#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int i,n;
    float a, sum=0;
    cout<<"1 + 1/2^2 + 1/3^3 + ..+ 1/n^n"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"enter the nth term"<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        a = 1.0/pow(i,i);
        sum += a;
    }
    cout<<sum;
    return 0;
}