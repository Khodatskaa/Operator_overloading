#ifndef VAR_H
#define VAR_H

#include <iostream>
#include <string>
using namespace std;

class var
{
private:
    enum class Type
    {
        INT,
        DOUBLE,
        STRING
    };

    Type valueType;
    union Value
    {
        int intValue;
        double doubleValue;
        std::string* stringValue;

        Value() : intValue(0) {}
        ~Value() {}
    } data;

    void convertTo(Type targetType);

public:
    var();
    var(int value);
    var(double value);
    var(const std::string& value);
    ~var();

    var(const var& other);
    var& operator=(const var& other);

    var operator+(const var& other) const;
    var operator-(const var& other) const;
    var operator*(const var& other) const;
    var operator/(const var& other) const;

    var& operator+=(const var& other);
    var& operator-=(const var& other);
    var& operator*=(const var& other);
    var& operator/=(const var& other);

    bool operator<(const var& other) const;
    bool operator>(const var& other) const;
    bool operator<=(const var& other) const;
    bool operator>=(const var& other) const;
    bool operator==(const var& other) const;
    bool operator!=(const var& other) const;

    int toInt() const;
    double toDouble() const;
    const char* toString() const;
};

#endif
