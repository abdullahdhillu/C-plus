#include <iostream>
using namespace std;
void calculator(int a , int b , char operation ){
  if (operation == '+'){
    cout<< a + b;
  }
  else if (operation == '-'){
    cout<< a - b;
  }
   else if (operation == '*'){
    cout<< a * b;
  }
   else if (operation == '/'){
    cout<< a / b;
  }
  else{
    cout<<"Invalid input";
  }
}
int main()
{
  int num1, num2;
  char operation;

  cout << "Enter first integer: ";
  cin >> num1;

  cout << "Enter second integer: ";
  cin >> num2;

  cout<<"Enter operation to be performed: ";

  cin>>operation;
  
  calculator( num1 , num2 , operation);
  
  return 0;
}
