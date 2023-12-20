#include "String.h"

int main() {
    string line1, line2;

    cout << "Enter the first line: ";
    cin >> line1;

    cout << "Enter the second line: ";
    cin >> line2;

    String strObject1(line1, line2);
    String strObject2(line2, line1);

    string result = strObject1 * strObject2;

    cout << "Intersection of the lines: " << result << endl;

    return 0;
}
