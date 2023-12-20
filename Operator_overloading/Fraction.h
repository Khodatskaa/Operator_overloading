#ifndef Fraction_h
#define Fraction_h

#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1);
    void simplify();
    int getGCD(int a, int b) const;
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
    void display() const;

};


#endif 

