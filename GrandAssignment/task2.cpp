#include<iostream>
using namespace std;
int main(){
    int capitals = 0 , smalls = 0 , digits = 0 , specials = 0;
    char passkey[20];
    cin.get(passkey,20);
    for(int i = 0 ; passkey[i] != '\0' ; i++){
        if (passkey[i] >= 65 && passkey[i] <= 90 ){
            capitals++;
        }
        else if (passkey[i] >= 97 && passkey[i] <= 122 ){
            smalls++;
        }
        else if (passkey[i] >= 48 && passkey[i] <= 57 ){
            digits++;
        }
        else{
            specials++;
        }
    }
    cout<<"Number of Uppercase letters : "<<capitals<<endl;
    cout<<"Number of lowercase letters : "<<smalls<<endl;
    cout<<"Number of Digits : "<<digits<<endl;
    cout<<"Number of special characters : "<<specials<<endl;
}
