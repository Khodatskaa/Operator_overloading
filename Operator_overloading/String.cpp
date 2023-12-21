#include "String.h"

String::String(const std::string& str1, const std::string& str2) : str1(str1), str2(str2) {}

string String::operator*(const String& other) const
{
    return str1 + other.str1 + str2 + other.str2;
}

// Overloading [] operator
char String::operator[](int index) const
{
    if (index >= 0 && index < str1.length())
    {
        return str1[index];
    }
    else
    {
        cout << "Error: Index out of bounds" << endl;
        return '\0'; 
    }
}

// Overloading () operator
int String::operator()(char character) const
{
    size_t found = str1.find(character);
    // npos - static member constant value with the greatest possible value for an element of type size_t
    if (found != string::npos)
    {
        // static_cast - converts between types using a combination of implicit and user-defined conversions
        return static_cast<int>(found);
    }
    else
    {
        return -1; 
    }
}
