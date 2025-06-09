#include<iostream>
#include<string>

using namespace std;

// ---------- Base Class ----------
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// ---------- Single Inheritance: B inherits A ----------
class B : public A {
public:
    void showB() {
        cout << "Class B (Single Inheritance from A)" << endl;
    }
};

// ---------- Multilevel Inheritance: C inherits B ----------
class C : public B {
public:
    void showC() {
        cout << "Class C (Multilevel Inheritance from B -> A)" << endl;
    }
};

// ---------- Multiple Inheritance: E inherits A and D ----------
class D {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

class E : public A, public D {
public:
    void showE() {
        cout << "Class E (Multiple Inheritance from A and D)" << endl;
    }
};

// ---------- Hierarchical Inheritance: F and G inherit A ----------
class F : public A {
public:
    void showF() {
        cout << "Class F (Hierarchical Inheritance from A)" << endl;
    }
};

class G : public A {
public:
    void showG() {
        cout << "Class G (Hierarchical Inheritance from A)" << endl;
    }
};

// ---------- Hybrid Inheritance: H inherits from B and D, B already inherits A ----------
class H : public B, public D {
public:
    void showH() {
        cout << "Class H (Hybrid Inheritance: B->A and D)" << endl;
    }
};

int main() {
    // Single Inheritance
    B objB;
    objB.showA();
    objB.showB();

    cout << endl;

    // Multilevel Inheritance
    C objC;
    objC.showA();
    objC.showB();
    objC.showC();

    cout << endl;

    // Multiple Inheritance
    E objE;
    objE.showA();
    objE.showD();
    objE.showE();

    cout << endl;

    // Hierarchical Inheritance
    F objF;
    objF.showA();
    objF.showF();

    G objG;
    objG.showA();
    objG.showG();

    cout << endl;

    // Hybrid Inheritance
    H objH;
    objH.showB();
    objH.showA();
    objH.showD();
    objH.showH();

    return 0;
}
