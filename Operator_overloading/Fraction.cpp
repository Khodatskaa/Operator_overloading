#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) {
        cout << "Error: Denominator cannot be zero. Setting to 1" << endl;
        denominator = 1;
    }
    simplify();
}

void Fraction::simplify() {
    int gcd = getGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

int Fraction::getGCD(int a, int b) const {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction Fraction::operator+(const Fraction& other) const {
    return Fraction((numerator * other.denominator) + (other.numerator * denominator),
        denominator * other.denominator);
}

Fraction Fraction::operator-(const Fraction& other) const {
    return Fraction((numerator * other.denominator) - (other.numerator * denominator),
        denominator * other.denominator);
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0) {
        cout << "Error: Division by zero" << endl;
        return Fraction();
    }

    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

void Fraction::display() const {
    cout << numerator << '/' << denominator;
}

