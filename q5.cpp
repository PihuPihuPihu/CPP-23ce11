#include <iostream>
using namespace std;

class A;
class B;
class C;

// Friend function declaration
void displayData(const A& a, const B& b, const C& c);

class A {
private:
    int priv_a;
protected:
    int pro_a;
public:
    A(int p, int pr) : priv_a(p), pro_a(pr) {}
    friend void displayData(const A& a, const B& b, const C& c);
};

class B {
private:
    int priv_b;
protected:
    int pro_b;
public:
    B(int p, int pr) : priv_b(p), pro_b(pr) {}
    friend void displayData(const A& a, const B& b, const C& c);
};

class C {
private:
    int priv_c;
protected:
    int pro_c;
public:
    C(int p, int pr) : priv_c(p), pro_c(pr) {}
    friend void displayData(const A& a, const B& b, const C& c);
};

void displayData(const A& a, const B& b, const C& c) {
    cout << "Class A - Private: " << a.priv_a << ", Protected: " << a.pro_a << endl;
    cout << "Class B - Private: " << b.priv_b << ", Protected: " << b.pro_b << endl;
    cout << "Class C - Private: " << c.priv_c << ", Protected: " << c.pro_c << endl;
}

int main() {
    A a(10, 20);
    B b(30, 40);
    C c(50, 60);

    displayData(a, b, c);

    return 0;
}
