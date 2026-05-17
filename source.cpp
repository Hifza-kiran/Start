#include <iostream>
#include "class.h"

using namespace std;

int main() {

    Date d1(10, 5, 2024);
    Date d2(15, 8, 2021);
    Date d3;

    cout << "Initial Dates:\n";
    cout << d1 << endl;
    cout << d2 << endl;

    // ==
    if (d2 == d3)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";

    // <
    if (d2 < d1)
        cout << "d2 is earlier\n";

    // ++ prefix
    ++d1;
    cout << "After ++d1: " << d1 << endl;

    // ++ postfix
    d1++;
    cout << "After d1++: " << d1 << endl;

    // -- prefix
    --d1;
    cout << "After --d1: " << d1 << endl;

    // assignment
    d3 = d2;
    cout << "After assignment d3 = d2: " << d3 << endl;

    // object count
    cout << "Objects created: " << Date::getObjectCount() << endl;

    return 0;
}