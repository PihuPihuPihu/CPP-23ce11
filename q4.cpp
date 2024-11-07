#include <iostream>
using namespace std;

class A;  // Forward declarations
class B;
class C;

class DataAccessor {
public:
    void displayData(A& a, B& b, C& c);
};

class A {
private:
    int priv_a;
protected:
    int pro_a;
public:
    A(int p, int pr) : priv_a(p), pro_a(pr) {}
    friend class DataAccessor;
};

class B {
private:
    int priv_b;
protected:
    int pro_b;
public:
    B(int p, int pr) : priv_b(p), pro_b(pr) {}
    friend class DataAccessor;
};

class C {
private:
    int priv_c;
protected:
    int pro_c;
public:
    C(int p, int pr) : priv_c(p), pro_c(pr) {}
    friend class DataAccessor;
};

void DataAccessor::displayData(A& a, B& b, C& c) {
    cout << "Class A - Private: " << a.priv_a << ", Protected: " << a.pro_a << endl;
    cout << "Class B - Private: " << b.priv_b << ", Protected: " << b.pro_b << endl;
    cout << "Class C - Private: " << c.priv_c << ", Protected: " << c.pro_c << endl;
}

int main() {
    A a(10, 20);
    B b(30, 40);
    C c(50, 60);

    DataAccessor dataAccessor;
    dataAccessor.displayData(a, b, c);

    return 0;
}
