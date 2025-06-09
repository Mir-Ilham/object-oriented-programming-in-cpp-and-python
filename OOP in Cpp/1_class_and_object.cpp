#include<iostream>
#include<string>

using namespace std;

class Car {
public:
    string brand;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar; // Object creation
    myCar.brand = "Toyota";
    myCar.year = 2020;

    myCar.displayInfo();

    return 0;
}
