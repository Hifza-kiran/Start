#pragma once
#include <iostream>

class Date {

private:
    int day;
    int month;
    int year;

    static int objectCount;

public:

    // Constructors
    Date();
    Date(int d, int m, int y);

    // Setters
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    // Getters
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // Display
    void display();

    // Functionalities
    bool isLeapYear();
    bool isValidDate();
    void displayLongFormat();
    void nextDay();
    void previousDay();
    int daysInMonth();

    // Comparison functions (old style)
    bool isEqual(Date d);

    // Copy helper
    void copyDate(Date d);

    // Static
    static int getObjectCount();

    // =========================
    // OPERATOR OVERLOADING
    // =========================

    // Assignment
    Date& operator=(const Date &d);

    // Comparisons
    bool operator==(const Date &d) const;
    bool operator!=(const Date &d) const;
    bool operator<(const Date &d) const;
    bool operator>(const Date &d) const;

    // Increment / Decrement
    Date& operator++();     // prefix ++
    Date operator++(int);   // postfix ++
    Date& operator--();     // prefix --
    Date operator--(int);   // postfix --

    // Stream output
    friend std::ostream& operator<<(std::ostream &out, const Date &d);
};