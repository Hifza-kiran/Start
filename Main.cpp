 #include <iostream>
#include<string>
 using namespace std;

// class Complex {
//     double real, imag;
// public:
//     Complex() {
//         real = 0.0;
//         imag = 0.0;
//         cout << "Default constructor called!!" << endl;
//     }
//     Complex(double r, double i) {
//         real = r;
//         imag = i;
//         cout << "parameterized  constructor called!!" << endl;
//     }
//     //Overload + operator
//     Complex operator+(const Complex& other) const {
//         return Complex(real + other.real, imag + other.imag);
//     }
//     void display()const {
//         cout << real << "+" << "imag" << endl;
// }

// };

// int main() {
//     Complex a(3, 2);
//         Complex b(1, 7);
//         Complex c;
//         c = a + b;
//         c.display();
  
// }
//Aggregation 
// Address class (to be used inside Student)
class Address {
private:
    string city;
    string street;

public:
    Address(string c, string s) {
        city = c;
        street = s;
    }

    void display() {
        cout << "City: " << city << ", Street: " << street << endl;
    }
};

// Student class has an Address (Aggregation)
class Student {
private:
    string name;
    int rollNo;
    Address* addr; // pointer shows aggregation (Student "has an" Address)

public:
    Student(string n, int r, Address* a) {
        name = n;
        rollNo = r;
        addr = a; // link existing Address object
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
        cout << "Address Info -> ";
        addr->display(); // use Address object
    }
};

int main() {
    // Create Address object separately
    Address addr1("Lahore", "Model Town");

    // Pass Address to Student (aggregation)
    Student s1("Hifza", 101, &addr1);

    cout << "Student Details:" << endl;
    s1.display();

    return 0;
}
