#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int price=650,quantity,age,discount=0;
  cout<<"Enter the quantity of the product youre buying ";
  cin>>quantity;
  cout<<"Enter your age ";
  cin>>age;
  if(age>65 && quantity > 100){
    discount = 0.85*(price*quantity);
  }
  else if(age>65 && quantity < 100){
    discount = 0.90*(price*quantity);
  }
  else if(age<65 && quantity < 100){
    discount = (price*quantity);
  }
  else if(age<65 && quantity > 100){
    discount = 0.10*(price*quantity);
  }

  cout<<"Price of The product is--"<<price<<endl;
  cout<<"Age of the customer is---"<<age<<endl;
  cout<<"Total bill is------------"<<discount<<endl;
  cout<<"Thank you for shopping !";
  return 0;
}
