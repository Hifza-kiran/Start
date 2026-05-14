#include "class.h"
#include<iostream>
using namespace std;
Date:: Date(){
    day=2;
    month=1;
    year=2000;
}
Date:: Date(int d, int m, int y){
    day=d;
    month=m;
    year=y;
}
void Date::setDay(int d){
    day=d;
}
void Date::setMonth(int m){
    month=m;
}
void Date::setYear(int y){
    year=y;
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
    cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
}
