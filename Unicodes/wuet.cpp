#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n) {
    int product = 1;
    for(int index = 1; index <= n; index++) {
        product *= index;
    }
    return product;
}

int main() {
    unsigned long n, m, a1, b1, c1;
    cout << "Enter n and m" << endl;
    cin >> n >> m;

    // Calculate a1 as the fifth power of n
    a1 = pow(n, 5);

    // Calculate b1 as the factorial of a1
    b1 = factorial(a1);

    // Calculate c1 using integer exponentiation and factorials
    c1 = pow(b1, factorial(4) + factorial(m));

    cout << c1 << endl;
    return 0;
}
