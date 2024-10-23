#include <iostream>
using namespace std;
class D {
protected:
    int num1;
public:
    void inputNum1() {
        cout<<"ENTER 1st NUMBER:";
        cin >> num1;}};
class D1 : public D {
protected:
    int num2;
public:
    void inputNum2() {
        cout<<"ENTER 2nd NUMBER:";
        cin >> num2;}};
class D2 : public D1 {
public:
    void sum(){
        cout<<"THE SUM:"<< num1 + num2;}};
int main(){
    D2 obj;
    obj.inputNum1();
    obj.inputNum2();
    obj.sum();
    return 0;
}


