#include "String.h"

int main()
{
    string line1, line2;

    cout << "Enter the first line: ";
    cin >> line1;

    cout << "Enter the second line: ";
    cin >> line2;

    String strObject1(line1, line2);
    String strObject2(line2, line1);

    string result = strObject1 * strObject2;

    cout << "Intersection of the lines: " << result << endl;

    cout << "Character at index 2 in strObject1: " << strObject1[2] << endl;

    char searchChar;
    cout << "Enter a character to search in strObject1: ";
    cin >> searchChar;
    int index = strObject1(searchChar);
    if (index != -1)
    {
        cout << "Character found at index: " << index << endl;
    }
    else
    {
        cout << "Character not found!" << endl;
    }

    return 0;
}
