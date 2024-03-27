#include <iostream>
#include "complexnumber.h"
using namespace std;

Pair makePair(int arg1, int arg2) {
    return Pair(arg1, arg2);
}

ComplexNumber makeComplexNumber(int arg1, int arg2) {
    return ComplexNumber(arg1, arg2);
}

int main() {
    ComplexNumber c1(3, 4);
    ComplexNumber c2(5, 6);

    cout << "Enter a complex number (real imaginary): ";
    cin >> c1;
    cout << "Enter another complex number (real imaginary): ";
    cin >> c2;
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    if (c1 > c2) {
        cout << "c1 is greater." << endl;
    } else {
        cout << "c2 is greater." << endl;
    }

    if (c1 == c2) {
        cout << "c1 is equal to c2" << endl;
    } else {
        cout << "c1 is not equal to c2" << endl;
    }

    cout << "Sum of complex numbers: " << c1 + c2 << endl;
    cout << "Product of complex numbers: " << c1 * c2 << endl;

    return 0;
}
