#include <iostream>
using namespace std;
class A {
public:
    void print() {
        cout << "A is before BCDE." << endl;  }};
class B : public A {
public:
    void print() {
        A::print();
        cout << "B is before CDE." << endl; }};
class C : public A {
public:
    void print() {
        A::print();
        cout << "C is before DE." << endl;}};
class D : public A {
public:
    void print() {
        A::print();
        cout << "D is before E." << endl; }};
class E : public B {
public:
    void print() {
        B::print();
        cout << "E is last." << endl;}};

int main() {
    A a;
    B b;
    C c;
    D d;
    E e;
    cout << "print() of each class:" << endl;
    a.print();
    cout << endl;
    b.print();
    cout << endl;
    c.print();
    cout << endl;
    d.print();
    cout << endl;
    e.print();

    return 0;
}


