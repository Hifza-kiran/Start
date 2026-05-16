#pragma once
#include<iostream>

class Date{

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
    int getDay()const;
    int getMonth()const;
    int getYear()const;

    // Display function
    void display();

    // Additional functionalities
    bool isLeapYear();
    bool isValidDate();
    void displayLongFormat();
    void nextDay();
    void previousDay();
    int daysInMonth();
    bool isEqual(Date d);
    void swapDates(Date &d);
    void copyDate(Date d);

    // Static function
    static int getObjectCount();
};