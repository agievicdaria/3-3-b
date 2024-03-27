#pragma once
#include <iostream>
using namespace std;

class Pair {
protected:
    int first;
    int second;
public:
    Pair(int f, int s) : first(f), second(s) {}

    friend bool operator>(const Pair& firstNum, const Pair& secondNum);
    friend bool operator==(const Pair& firstNum, const Pair& secondNum);
    friend istream& operator>>(istream& in, Pair& pair);
    friend ostream& operator<<(ostream& out, const Pair& pair);
};
