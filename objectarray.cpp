#include<iostream>
#include<string>
using namespace std;
class Employee{
  public:
  int id;
  string name;
  void setID(){
    cout<<"Enter the ID of Employee"<<endl;
    cin>>id;
    cout<<"Enter the name of Employee"<<endl;
    cin>>name;
  }
  void getID(){
    cout<<"The id of employee is "<<id;
    cout<<" and the name of employee is "<<name<<endl;
  }
};
int main()
{
  Employee fb[3];
  for(int i = 0; i<3; i++){
    fb[i].setID();
  }
  for(int i = 0; i<3; i++){
    fb[i].getID();
  }
 return 0;
}
