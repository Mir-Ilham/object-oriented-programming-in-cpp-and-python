#include<iostream>
#include<string>

using namespace std;

// Abstract class: contains at least one pure virtual function
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    void describe() {
        cout << "This is a shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    // Shape s; // ❌ Error: Cannot instantiate abstract class

    Shape* shapePtr;

    Circle c;
    Rectangle r;

    shapePtr = &c;
    shapePtr->draw();       // Calls Circle's draw()

    shapePtr = &r;
    shapePtr->draw();       // Calls Rectangle's draw()

    return 0;
}
