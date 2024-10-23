#include <iostream>
using namespace std;

class Parent {
protected:
    int num1, num2;
public:
    void input() {
        cout<<"ENTER TWO NUMBERS:";
        cin >> num1 >> num2;}};

class Child : public Parent {
public:
    void product() {
        cout<<"THE PRODUCT:"<< num1 * num2;}};

void main() {
    Child obj;
    obj.input();
    obj.product();
    
}
