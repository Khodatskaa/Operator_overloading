#include "Date.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

int Date::operator-(const Date& other) const {
    int days1 = day + month * 30 + year * 365;
    int days2 = other.day + other.month * 30 + other.year * 365;
    return days1 - days2;
}

Date Date::operator+(int days) const {
    int totalDays = day + month * 30 + year * 365 + days;

    Date result(1, 1, 1);
    result.year = totalDays / 365;
    result.month = (totalDays % 365) / 30;
    result.day = (totalDays % 365) % 30;

    return result;
}

void Date::print(ostream& os) const {
    os << day << "/" << month << "/" << year;
}

ostream& operator<<(ostream& os, const Date& date) {
    date.print(os);
    return os;
}

istream& operator>>(istream& is, Date& date) {
    int day, month, year;
    is >> day >> month >> year;
    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);
    return is;
}

