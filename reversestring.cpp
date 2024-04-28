#include <iostream>
#include<string>
using namespace std;
int main() {
    string pehli,dusri;
    cout<<"Enter in string : ";
    getline(cin , pehli);
    cout<<"Reversed string : ";
    for(int i = pehli.size() - 1 ; i >= 0 ; i--){
     dusri += pehli[i];
    }
    cout<<dusri;
    return 0;
}
