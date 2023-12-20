#include "Date.h"
#include <iostream>

int main() {
    Date date1, date2;

    cout << "Enter the first date (day month year): ";
    cin >> date1;

    cout << "Enter the second date (day month year): ";
    cin >> date2;

    int difference = date2 - date1;
    cout << "Difference between dates: " << difference << " days" << endl;

    return 0;
}

