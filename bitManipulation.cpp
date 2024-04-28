#include <iostream>
using namespace std;

int getBit(int n ,int pos){
    return (n & (1<<pos)) != 0;
}

int setBit(int n , int pos){
    return(n | (1<<pos));
}

int clearBit(int n , int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n , int pos , int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int main() {
    cout<<getBit(228,4)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(123,3)<<endl;
    cout<<updateBit(124,3 ,0)<<endl;
}
