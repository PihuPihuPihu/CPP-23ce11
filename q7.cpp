#include <iostream>
using namespace std;

class Base {
public:
    void sum(int a, int b, int c) {
        cout << "Sum in Base class: " << (a + b + c) << endl;
    }
};

class Derived : public Base {
public:
    void sum(int a, int b, int c) override {
        cout << "Sum in Derived class: " << (a + b + c) << endl;
    }

    void displayBaseSum(int a, int b, int c) {
        Base::sum(a, b, c);
    }
};

int main() {
    Derived derivedObj;

    derivedObj.sum(5, 10, 15);
    derivedObj.displayBaseSum(5, 10, 15);

    return 0;
}
