#include "pair.h"
using namespace std;

istream& operator>>(istream& in, Pair& pair) {
    in >> pair.first >> pair.second;
    return in;
}

ostream& operator<<(ostream& out, const Pair& pair) {
    out << "(" << pair.first << ", " << pair.second << ")";
    return out;
}

bool operator>(const Pair& firstNum, const Pair& secondNum) {
    return (firstNum.first > secondNum.first) || (firstNum.first == secondNum.first && firstNum.second > secondNum.second);
}

bool operator==(const Pair& firstNum, const Pair& secondNum) {
    return (firstNum.first == secondNum.first) && (firstNum.second == secondNum.second);
}
