#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,distance;
    cout<<"Enter two values of x and y each (with spaces)";
    cin>>x1>>x2>>y1>>y2;
    distance = pow((x2-x1) , 2) + pow((y2-y1) , 2);
    cout<<"Distance is : "<<distance;
    return 0;
}