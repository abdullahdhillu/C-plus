#include <iostream>
using namespace std;
int NumberOfOnes(int n){
    int count = 0;
    while(n){
        n = n & n-1;
        count++;
    }
    return count;
}
int main() {
    int a = NumberOfOnes(4217);
    cout<<a;

    return 0;
}
