#include<iostream>
#include<string>

using namespace std;

class Counter {
private:
    static int count; // Static data member

public:
    Counter() {
        count++; // Increment count for every object created
    }

    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }
};

// Definition and initialization of static variable outside the class
int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;
    Counter c3;

    Counter::showCount(); // Accessing static function without an object

    return 0;
}
