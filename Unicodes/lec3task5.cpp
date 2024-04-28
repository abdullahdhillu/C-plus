#include<iostream>
#include<string>
using namespace std;
int main()
{
  int x,y,operation;
  cout<<"Enter two numbers :";
  cin>>x>>y;
  cout<<"Enter operation to be performed on these values \n1. addition \n2. subtraction \n3. multiplication \n4. division"<<endl;
  cin>>operation;
  if(operation == 1){
    cout<<x+y<<endl;
  }
  else if(operation ==2){
    cout<<x-y;
  }
  else if(operation == 3){
    cout<<x*y;
  }
  else if (operation == 4){
    cout<<x/y;
  }
  else{
    cout<<"Invalid Input";
  }
  return 0;
}
