#pragma once
#include<iostream>

class Date{
private:
    int day;
    int month;
    int year;

    static int objectCount;

public:
    Date();
    Date(int d, int m, int y);

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    int getDay()const;
    int getMonth()const;
    int getYear()const;

    void display();

    // Added NEW FUNCTIONS
    bool isLeapYear();
    bool isValidDate();
    void displayLongFormat();
    void nextDay();
    bool isEqual(Date d);

    static int getObjectCount();
};