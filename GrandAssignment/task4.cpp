#include<iostream>
using namespace std;
void strcopy(string& s2 , string& s1){
    s2.resize(s1.length());
    for(int i = 0 ; i < s1.length() ; i++){
        s2[i] = s1[i];
    }
    cout<<s2;
}
int main(){
    string s1 = "yo wassup";
    string s2 = "ms";
    strcopy(s2 , s1);
}
