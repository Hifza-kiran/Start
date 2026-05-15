#include "class.h"
#include<iostream>

using namespace std;

// Static variable definition
int Date::objectCount = 0;

Date::Date(){
    day = 2;
    month = 1;
    year = 2000;
    objectCount++;
}

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
    objectCount++;
}

void Date::setDay(int d){
    day = d;
}

void Date::setMonth(int m){
    month = m;
}

void Date::setYear(int y){
    year = y;
}

int Date::getDay()const{
    return day;
}

int Date::getMonth()const{
    return month;
}

int Date::getYear()const{
    return year;
}

void Date::display(){
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

// CHECK LEAP YEAR
bool Date::isLeapYear(){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return true;
    }
    return false;
}

// VALIDATE DATE
bool Date::isValidDate(){

    if(month < 1 || month > 12)
        return false;

    if(day < 1 || day > 31)
        return false;

    if(month == 2){
        if(isLeapYear()){
            return day <= 29;
        }
        else{
            return day <= 28;
        }
    }

    if(month == 4 || month == 6 || month == 9 || month == 11){
        return day <= 30;
    }

    return true;
}

// DISPLAY LONG FORMAT
void Date::displayLongFormat(){

    string months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    cout << day << " " << months[month - 1]
         << " " << year << endl;
}

// NEXT DAY FUNCTION
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

// COMPARE TWO DATES
bool Date::isEqual(Date d){

    if(day == d.day &&
       month == d.month &&
       year == d.year){

        return true;
    }

    return false;
}

// STATIC FUNCTION
int Date::getObjectCount(){
    return objectCount;
}