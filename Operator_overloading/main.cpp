#include "Fraction.h"

int main() {

	cout << "Enter the numerator of the first fraction: ";
	int num1;
	cin >> num1;

	cout << "Enter the denominator of the first fraction: ";
	int denom1;
	cin >> denom1;

	cout << "Enter the numerator of the second fraction: ";
	int num2;
	cin >> num2;

	cout << "Enter the denominator of the second fraction: ";
	int denom2;
	cin >> denom2;

	Fraction f1(num1, denom1);
	Fraction f2(num2, denom2);

	cout << "f1 = ";
	f1.display();
	cout << endl;

	cout << "f2 = ";
	f2.display();
	cout << endl;

	cout << "f1 + f2 = ";
	(f1 + f2).display();
	cout << endl;

	cout << "f1 - f2 = ";
	(f1 - f2).display();
	cout << endl;

	cout << "f1 * f2 = ";
	(f1 * f2).display();
	cout << endl;

	cout << "f1 / f2 = ";
	(f1 / f2).display();
	cout << endl;

	return 0;
}

