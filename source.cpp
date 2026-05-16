#include<iostream>
#include "class.h"

using namespace std;

int main(){

    Date date1;
    Date date2(15, 8, 2021);
    Date date3(15, 8, 2021);
    Date date4(1, 1, 2025);

    // Default and parameterized constructors
    cout << "Default Date: ";
    date1.display();

    cout << "Parameterized Date: ";
    date2.display();

    // Modify date
    date1.setDay(10);
    date1.setMonth(12);
    date1.setYear(2022);

    cout << "Modified Date: ";
    date1.display();

    // Leap year check
    if(date1.isLeapYear()){
        cout << "Leap Year" << endl;
    }
    else{
        cout << "Not a Leap Year" << endl;
    }

    // Date validation
    if(date1.isValidDate()){
        cout << "Valid Date" << endl;
    }
    else{
        cout << "Invalid Date" << endl;
    }

    // Long format display
    cout << "Long Format: ";
    date1.displayLongFormat();

    // Next day
    cout << "Next Day: ";
    date1.nextDay();
    date1.display();

    // Previous day
    cout << "Previous Day: ";
    date4.previousDay();
    date4.display();

    // Days in month
    cout << "Days in Current Month: ";
    cout << date4.daysInMonth() << endl;

    // Compare dates
    if(date2.isEqual(date3)){
        cout << "Dates are Equal" << endl;
    }
    else{
        cout << "Dates are Not Equal" << endl;
    }

    // Swap dates
    cout << "\nBefore Swapping:" << endl;
    date1.display();
    date2.display();

    date1.swapDates(date2);

    cout << "After Swapping:" << endl;
    date1.display();
    date2.display();

    // Copy date
    cout << "Copied Date: ";
    date4.copyDate(date2);
    date4.display();

    // Object counter
    cout << "Total Objects Created: ";
    cout << Date::getObjectCount() << endl;

    return 0;
}