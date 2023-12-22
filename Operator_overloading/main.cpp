#include "Array.h"
#include <iostream>

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    Array arr(size);

    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Original Array: ";
    arr.display();

    int index;
    cout << "Enter an index to retrieve the element: ";
    cin >> index;
    cout << "Element at index " << index << ": " << arr[index] << endl;

    int value;
    cout << "Enter a value to increase all elements by: ";
    cin >> value;
    arr(value);
    cout << "Array after increasing all elements by " << value << ": ";
    arr.display();

    int sum = static_cast<int>(arr);
    cout << "Sum of array elements: " << sum << endl;

    const char* strRep = static_cast<const char*>(arr);
    cout << "String representation of array: " << strRep << endl;

    return 0;
}
