#include<iostream>
#include<string>

using namespace std;

// Interface: abstract class with only pure virtual functions
class IShape {
public:
    virtual void draw() = 0;
    virtual double area() = 0;
    virtual ~IShape() {} // Virtual destructor (good practice for interfaces)
};

// Implementing the interface
class Circle : public IShape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void draw() override {
        cout << "Drawing a Circle." << endl;
    }

    double area() override {
        return 3.1416 * radius * radius;
    }
};

class Square : public IShape {
private:
    double side;

public:
    Square(double s) {
        side = s;
    }

    void draw() override {
        cout << "Drawing a Square." << endl;
    }

    double area() override {
        return side * side;
    }
};

int main() {
    IShape* shape;

    Circle c(5.0);
    Square s(4.0);

    shape = &c;
    shape->draw();
    cout << "Area: " << shape->area() << endl;

    shape = &s;
    shape->draw();
    cout << "Area: " << shape->area() << endl;

    return 0;
}
