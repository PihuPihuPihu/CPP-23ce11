#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int val) : a(val) {}

    Number operator++() {
        a += 5;
        return *this;
    }

    Number operator--() {
        a -= 1;
        return *this;
    }

    Number operator~() {
        a = -a;
        return *this;
    }

    friend void display(const Number& n);
};

void display(const Number& n) {
    cout << "Value of a: " << n.a << endl;
}

int main() {
    Number num(10);

    display(num);
    ++num;
    display(num);

    --num;
    display(num);

    ~num;
    display(num);

    ~num;
    display(num);

    return 0;
}
