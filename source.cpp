#include<iostream>
#include "class.h"
using namespace std;
int main(){
    Date date1; // Default constructor
    Date date2(15, 8, 2021); // Parameterized constructor
    cout << "Default Date: ";
    date1.display();
    cout << "Parameterized Date: ";
    date2.display();
    // Modifying date1 using setter methods
    date1.setDay(10);
    date1.setMonth(12);
    date1.setYear(2022);
    cout << "Modified Date: ";
    date1.display();
    return 0;
    
}

