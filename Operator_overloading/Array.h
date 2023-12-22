#ifndef Array_h
#define Array_h

#include <iostream>
#include <string>
using namespace std;

class Array
{
private:
	int* elements;
	int size;
public:
    Array(int size);
    Array(const Array& other);
    ~Array();
    int& operator[](int index);
    Array& operator()(int value);
    operator int() const;
    operator const char* () const;
    void display() const;
};

#endif 