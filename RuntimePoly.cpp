#include <iostream>
using namespace std;

class Shape {
public:
    // Virtual function for runtime polymorphism
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    // Overriding the base class function
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    // Overriding the base class function
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circleObj;
    Square squareObj;

    shapePtr->draw(); // Output: Drawing a generic shape.   

    // Base class pointer pointing to derived class object
    shapePtr = &circleObj;
    shapePtr->draw(); // Output: Drawing a circle.

    shapePtr = &squareObj;
    shapePtr->draw(); // Output: Drawing a square.


    delete shapePtr;
    
    return 0;
}