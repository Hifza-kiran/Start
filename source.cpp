#include<iostream>
#include "class.h"

using namespace std;

int main(){

    Date date1;
    Date date2(15, 8, 2021);
    Date date3(15, 8, 2021);

    cout << "Default Date: ";
    date1.display();

    cout << "Parameterized Date: ";
    date2.display();

    // MODIFY DATE
    date1.setDay(10);
    date1.setMonth(12);
    date1.setYear(2022);

    cout << "Modified Date: ";
    date1.display();

    // LEAP YEAR
    if(date1.isLeapYear()){
        cout << "Leap Year" << endl;
    }
    else{
        cout << "Not a Leap Year" << endl;
    }

    // VALID DATE
    if(date1.isValidDate()){
        cout << "Valid Date" << endl;
    }
    else{
        cout << "Invalid Date" << endl;
    }

    // LONG FORMAT
    cout << "Long Format: ";
    date1.displayLongFormat();

    // NEXT DAY
    cout << "Next Day: ";
    date1.nextDay();
    date1.display();

    // DATE COMPARISON
    if(date2.isEqual(date3)){
        cout << "Dates are Equal" << endl;
    }
    else{
        cout << "Dates are Not Equal" << endl;
    }

    // OBJECT COUNT
    cout << "Total Objects Created: "
         << Date::getObjectCount() << endl;

    return 0;
}