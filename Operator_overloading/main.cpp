#include "Complex.h"

int main() {
    double real1, imag1, real2, imag2;

    cout << "Enter real part for the first complex number: ";
    cin >> real1;

    cout << "Enter imaginary part for the first complex number: ";
    cin >> imag1;

    cout << "Enter real part for the second complex number: ";
    cin >> real2;

    cout << "Enter imaginary part for the second complex number: ";
    cin >> imag2;

    Complex complex1(real1, imag1);
    Complex complex2(real2, imag2);

    Complex sum = complex1 + complex2;
    Complex difference = complex1 - complex2;
    Complex product = complex1 * complex2;
    Complex quotient = complex1 / complex2;

    cout << "Complex 1: ";
    complex1.display();
    cout << endl;

    cout << "Complex 2: ";
    complex2.display();
    cout << endl;

    cout << "Sum: ";
    sum.display();
    cout << endl;

    cout << "Difference: ";
    difference.display();
    cout << endl;

    cout << "Product: ";
    product.display();
    cout << endl;

    cout << "Quotient: ";
    quotient.display();
    cout << endl;

    return 0;
}