#include "class.h"
#include <iostream>

using namespace std;

// Static variable
int Date::objectCount = 0;

// Constructors
Date::Date() {
    day = 2;
    month = 1;
    year = 2000;
    objectCount++;
}

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
    objectCount++;
}

// Setters
void Date::setDay(int d) { day = d; }
void Date::setMonth(int m) { month = m; }
void Date::setYear(int y) { year = y; }

// Getters
int Date::getDay() const { return day; }
int Date::getMonth() const { return month; }
int Date::getYear() const { return year; }

// Display
void Date::display() {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

// Leap year
bool Date::isLeapYear() {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Validation
bool Date::isValidDate() {
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;

    if (month == 2)
        return isLeapYear() ? day <= 29 : day <= 28;

    if (month == 4 || month == 6 || month == 9 || month == 11)
        return day <= 30;

    return true;
}

// Long format
void Date::displayLongFormat() {
    string months[] = {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };

    cout << day << " " << months[month - 1] << " " << year << endl;
}

// Next day
void Date::nextDay() {
    day++;
    if (!isValidDate()) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

// Previous day
void Date::previousDay() {
    day--;
    if (day < 1) {
        month--;
        if (month < 1) {
            month = 12;
            year--;
        }
        day = daysInMonth();
    }
}

// Days in month
int Date::daysInMonth() {
    if (month == 2)
        return isLeapYear() ? 29 : 28;

    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    return 31;
}

// Compare function (old)
bool Date::isEqual(Date d) {
    return (day == d.day && month == d.month && year == d.year);
}

// Copy
void Date::copyDate(Date d) {
    day = d.day;
    month = d.month;
    year = d.year;
}

// Static
int Date::getObjectCount() {
    return objectCount;
}

// =========================
// OPERATOR OVERLOADING
// =========================

// Assignment
Date& Date::operator=(const Date &d) {
    if (this != &d) {
        day = d.day;
        month = d.month;
        year = d.year;
    }
    return *this;
}

// Equal
bool Date::operator==(const Date &d) const {
    return (day == d.day && month == d.month && year == d.year);
}

// Not equal
bool Date::operator!=(const Date &d) const {
    return !(*this == d);
}

// Less than
bool Date::operator<(const Date &d) const {
    if (year != d.year) return year < d.year;
    if (month != d.month) return month < d.month;
    return day < d.day;
}

// Greater than
bool Date::operator>(const Date &d) const {
    return d < *this;
}

// Prefix ++
Date& Date::operator++() {
    nextDay();
    return *this;
}

// Postfix ++
Date Date::operator++(int) {
    Date temp = *this;
    nextDay();
    return temp;
}

// Prefix --
Date& Date::operator--() {
    previousDay();
    return *this;
}

// Postfix --
Date Date::operator--(int) {
    Date temp = *this;
    previousDay();
    return temp;
}

// Output stream
ostream& operator<<(ostream &out, const Date &d) {
    out << d.day << "/" << d.month << "/" << d.year;
    return out;
}