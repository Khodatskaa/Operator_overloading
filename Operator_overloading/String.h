#ifndef  String_h
#define String_h

#include <iostream>
using namespace std;

class String
{
private:
	string str1;
	string str2;

public:
	String(const std::string& str1, const std::string& str2);
	string operator*(const String& other) const;
};


#endif 

