#include <iostream>
using namespace std;

// Function Overloading
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

// Operator Overloading
class Complex {
    double real, imag;
public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Function Overloading
    Math m;
    cout << "Sum (int): " << m.add(2, 3) << endl;
    cout << "Sum (double): " << m.add(2.5, 3.7) << endl;

    // Operator Overloading
    Complex c1(1.2, 3.4), c2(5.6, 7.8);
    Complex c3 = c1 + c2;
    cout << "Sum of complex numbers: ";

    return 0;
}