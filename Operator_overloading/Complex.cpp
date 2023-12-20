#include "Complex.h"
#include <iostream>

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex((real * other.real) - (imag * other.imag), (real * other.imag) + (imag * other.real));
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    if (denominator == 0.0) {
        cout << "Error: Division by zero" << endl;
        return Complex();
    }
    return Complex((real * other.real + imag * other.imag) / denominator,
        (imag * other.real - real * other.imag) / denominator);
}

void Complex::display() const {
    cout << "(" << real << " + " << imag << "i)";
}

