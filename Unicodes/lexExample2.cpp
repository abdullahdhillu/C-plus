#include<iostream>
#include<string>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter 1st value: \n";
cin>> num1;
cout<<"Enter 2nd value: \n";
cin>> num2;
cout<< "The 1st value entered: "<< num1<<endl;
cout<<"The 2nd value entered: "<< num2 <<endl;
cout<< "Enter new value for both separated by a space: \n";
cin>> num1>> num2;
cout<< "New values are: "<< num1 << " " << num2 <<endl;
return 0;
}
