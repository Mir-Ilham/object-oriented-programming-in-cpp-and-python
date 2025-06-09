#include<iostream>
#include<string>

using namespace std;

// ---------- Compile-Time Polymorphism: Function Overloading ----------
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

// ---------- Run-Time Polymorphism: Function Overriding ----------
class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // ---------- Compile-Time Polymorphism ----------
    Calculator calc;
    cout << "add(2, 3): " << calc.add(2, 3) << endl;
    cout << "add(2.5, 3.1): " << calc.add(2.5, 3.1) << endl;
    cout << "add(1, 2, 3): " << calc.add(1, 2, 3) << endl;

    cout << endl;

    // ---------- Run-Time Polymorphism ----------
    Animal* a;
    Dog d;
    Cat c;

    a = &d;
    a->speak();  // Calls Dog's speak

    a = &c;
    a->speak();  // Calls Cat's speak

    return 0;
}
