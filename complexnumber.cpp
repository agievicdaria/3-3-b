#include "complexnumber.h"
using namespace std;

ComplexNumber operator+(const ComplexNumber& firstNum, const ComplexNumber& secondNum) {
    return ComplexNumber(firstNum.getReal() + secondNum.getReal(), firstNum.getImaginary() + secondNum.getImaginary());
}

ComplexNumber operator*(const ComplexNumber& firstNum, const ComplexNumber& secondNum) {
    int real = firstNum.getReal() * secondNum.getReal() - firstNum.getImaginary() * secondNum.getImaginary();
    int imag = firstNum.getReal() * secondNum.getImaginary() + firstNum.getImaginary() * secondNum.getReal();
    return ComplexNumber(real, imag);
}
