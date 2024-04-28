#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i = 1 ; i <= n ; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int arr[10];
    for(int i = 0; i< 10;i++){
        cin>>arr[i];
    }
    cout<<"Factorial of numbers divisible by 3 "<<endl;
    for(int i = 0; i< 10;i++){
        if(arr[i]%3 == 0){
            cout<<fact(arr[i])<<" ";
        }   
    }
    cout<<endl;
    for(int i = 0; i< 10;i++){
        if(arr[i]%3 != 0){
            for(int j = 1 ; j <= 10 ; j++){
              cout<<arr[i]<<" x "<<j<<" = "<<arr[i]*j<<endl;
            }
            cout<<endl;
        }
    }
}
