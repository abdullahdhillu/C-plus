#include <iostream>
using namespace std;

class complex;

class calculator {
public:
    short c, d;  // Using short instead of int for smaller memory usage
    short sumRealComplex(complex, complex);
    short sumCompComplex(complex, complex);
    void add(complex, complex);
};

class complex {
    friend class calculator;

public:
    short a, b;  // Using short instead of int for smaller memory usage

    void setNumber(short v1, short v2) {  // Using short instead of int for smaller memory usage
        a = v1;
        b = v2;
    }
};

short calculator::sumCompComplex(complex object1, complex object2) {
    return (object1.b + object2.b);
}

short calculator::sumRealComplex(complex object1, complex object2) {
    return (object1.a + object2.a);
}

void calculator::add(complex object1, complex object2) {
    c = object1.a + object2.a;
    d = object1.b + object2.b;
    cout << "Sum of complex numbers: " << c << " + " << d << "i" << endl;
}

int main() {
    complex c1, c2;
    c1.setNumber(5, 2);
    c2.setNumber(8, 1);
    calculator calc;

    short res = calc.sumRealComplex(c1, c2);
    short res1 = calc.sumCompComplex(c1, c2);
    calc.add(c1, c2);

    cout << "Sum of real parts of object c1 and c2 is " << res << endl;
    cout << "Sum of imaginary parts of object c1 and c2 is " << res1 << endl;

    return 0;
}
