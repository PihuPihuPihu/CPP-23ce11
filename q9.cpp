#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int val) : a(val) {}

    Number operator+(const Number& other) {
        return Number(a + other.a);
    }

    Number operator-(const Number& other) {
        return Number(a - other.a);
    }

    friend void display(const Number& n);
};

void display(const Number& n) {
    cout << "Value: " << n.a << endl;
}

int main() {
    Number num1(10), num2(5);

    Number sum = num1 + num2;
    display(sum);

    Number difference = num1 - num2;
    display(difference);

    return 0;
}
