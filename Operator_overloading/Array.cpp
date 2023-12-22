#include "Array.h"

Array::Array(int size)
{
	this->size = size;
	elements = new int[size];
}

Array::Array(const Array& other)
{
	size = other.size;
	elements = new int[size];
	for (int i = 0; i < size; i++)
		elements[i] = other.elements[i];
}

Array::~Array()
{
	delete[] elements;
}

int& Array::operator[](int index)
{
	if (index < 0 || index >= size)
		throw "Index out of bounds";
	return elements[index];
}

Array& Array::operator()(int value)
{
	for (int i = 0; i < size; i++)
		elements[i] = value;
	return *this;
}

Array::operator int() const
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += elements[i];
	return sum;
}

Array::operator const char* () const
{
	string str = "[";
	for (int i = 0; i < size; i++)
	{
		str += to_string(elements[i]);
		if (i < size - 1)
			str += ", ";
	}
	str += "]";
	//str.c_str() returns a const char* that points to the first character of the string
	return str.c_str();
}

void Array::display() const
{
	cout << *this << endl;
}
