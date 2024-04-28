#include<iostream>
#include<cstring>
using namespace std;
string strconcat(string& s2 , string& s1){
    return s1 + " " + s2;
}
int main(){
    string s1 = "Babyy";
    string s2 = "I love you";
    string result  =  strconcat(s2 , s1);
    cout<<result;
}
