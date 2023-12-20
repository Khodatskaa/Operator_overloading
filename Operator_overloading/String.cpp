#include "String.h"

String::String(const std::string& str1, const std::string& str2) : str1(str1), str2(str2) {}

string String::operator*(const String& other) const
{
	return str1 + other.str1 + str2 + other.str2;
}