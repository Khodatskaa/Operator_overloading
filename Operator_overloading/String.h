#ifndef String_h
#define String_h

#include <iostream>
#include <string>
using namespace std;

class String
{
private:
    string str1;
    string str2;

public:
    String(const string& str1, const std::string& str2);

    string operator*(const String& other) const;
    char operator[](int index) const;
    int operator() (char character) const;
};

#endif
