#pragma once
using namespace std;
#include "pair.h"

class ComplexNumber : public Pair {
public:
    ComplexNumber(int real, int imag) : Pair(real, imag) {}

    int getReal() const { return first; }
    void setReal(int real) { first = real; }
    int getImaginary() const { return second; }
    void setImaginary(int imag) { second = imag; }

    friend ComplexNumber operator+(const ComplexNumber& firstNum, const ComplexNumber& secondNum);
    friend ComplexNumber operator*(const ComplexNumber& firstNum, const ComplexNumber& secondNum);
};

