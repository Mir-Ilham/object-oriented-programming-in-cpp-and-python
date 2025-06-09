#include<iostream>
#include<string>

using namespace std;

class File {
private:
    string filename;

public:
    // Constructor
    File(string fname) {
        filename = fname;
        cout << "Opening file: " << filename << endl;
    }

    // Destructor
    ~File() {
        cout << "Closing file: " << filename << endl;
    }

    void read() {
        cout << "Reading data from " << filename << endl;
    }
};

int main() {
    {
        File f("data.txt"); // Constructor is called
        f.read();
    } // Destructor is automatically called here when 'f' goes out of scope

    return 0;
}
