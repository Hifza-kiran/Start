#include "class.h"
#include<iostream>

using namespace std;

// Static variable initialization
int Date::objectCount = 0;

// Default constructor
Date::Date(){
    day = 2;
    month = 1;
    year = 2000;
    objectCount++;
}

// Parameterized constructor
Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
    objectCount++;
}

// Setters
void Date::setDay(int d){
    day = d;
}

void Date::setMonth(int m){
    month = m;
}

void Date::setYear(int y){
    year = y;
}

// Getters
int Date::getDay()const{
    return day;
}

int Date::getMonth()const{
    return month;
}

int Date::getYear()const{
    return year;
}

// Display function
void Date::display(){
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

// Leap year check
bool Date::isLeapYear(){

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return true;
    }

    return false;
}

// Date validation
bool Date::isValidDate(){

    if(month < 1 || month > 12)
        return false;

    if(day < 1 || day > 31)
        return false;

    if(month == 2){

        if(isLeapYear())
            return day <= 29;

        else
            return day <= 28;
    }

    if(month == 4 || month == 6 ||
       month == 9 || month == 11){

        return day <= 30;
    }

    return true;
}

// Long format display
void Date::displayLongFormat(){

    string months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    cout << day << " "
         << months[month - 1]
         << " " << year << endl;
}

// Next day function
void Date::nextDay(){

    day++;

    if(!isValidDate()){

        day = 1;
        month++;

        if(month > 12){
            month = 1;
            year++;
        }
    }
}

// Previous day function
void Date::previousDay(){

    day--;

    if(day < 1){

        month--;

        if(month < 1){
            month = 12;
            year--;
        }

        day = daysInMonth();
    }
}

// Days in month
int Date::daysInMonth(){

    if(month == 2){

        if(isLeapYear())
            return 29;

        else
            return 28;
    }

    if(month == 4 || month == 6 ||
       month == 9 || month == 11){

        return 30;
    }

    return 31;
}

// Compare dates
bool Date::isEqual(Date d){

    if(day == d.day &&
       month == d.month &&
       year == d.year){

        return true;
    }

    return false;
}

// Swap dates
void Date::swapDates(Date &d){

    int temp;

    temp = day;
    day = d.day;
    d.day = temp;

    temp = month;
    month = d.month;
    d.month = temp;

    temp = year;
    year = d.year;
    d.year = temp;
}

// Copy date
void Date::copyDate(Date d){

    day = d.day;
    month = d.month;
    year = d.year;
}

// Static function
int Date::getObjectCount(){
    return objectCount;
}