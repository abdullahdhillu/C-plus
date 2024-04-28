#include <iostream>
using namespace std;
bool ispowerof2(int n){
    return (n && !(n & n-1));
}
int main() {
    int a = ispowerof2(0);
    cout<<a;

    return 0;
}
