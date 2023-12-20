#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(1) {}

    Date(int day, int month, int year);

    int operator-(const Date& other) const;
    Date operator+(int days) const;

    void print(ostream& os) const;

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    void setDay(int newDay) { day = newDay; }
    void setMonth(int newMonth) { month = newMonth; }
    void setYear(int newYear) { year = newYear; }
};

ostream& operator<<(std::ostream& os, const Date& date);
istream& operator>>(std::istream& is, Date& date);

#endif

