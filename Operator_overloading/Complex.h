#ifndef Complex_h
#define Complex_h

#include <iostream>
using namespace std;

class Complex
{
private:
	double real;
	double imag;

public:
	Complex(double r = 0.0, double i = 0.0);
	Complex operator+(const Complex& other) const;
	Complex operator-(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	Complex operator/(const Complex& other) const;
	void display() const;
};


#endif 

