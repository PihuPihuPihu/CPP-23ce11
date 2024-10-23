#include <iostream>
using namespace std;
class P {
protected:
    int num1;
    int num2;
public:
    void inputNum1() {
        cout<<"ENTER 1st NUMBER:";
        cin >> num1;}
    void inputNum2() {
        cout<<"ENTER 2nd NUMBER:";
        cin >> num2;}};
class D1:public P {
public:
    void displayNum1() {
        cout<<"FIRST NUMBER:"<<num1<<endl;}};
class D2 : public P{
public:
    void displayNum2(){
        cout<<"SECOND NUMBER:"<<num2;}};
int main(){
    D1 d1;
    D2 d2;
    d1.inputNum1();
    d2.inputNum2();
    d1.displayNum1();
    d2.displayNum2();
    return 0;
}


