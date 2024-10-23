#include <iostream>
using namespace std;
class P1 {
protected:
    int num1;
public:
    void inputNum1() {
        cout<<"ENTER 1st NUMBER:";
        cin >> num1;}};
class P2 {
protected:
    int num2;
public:
    void inputNum2() {
        cout<<"ENTER 2nd NUMBER:";
        cin >> num2;}};
class C : public P1 , public P2 {
public:
    void sum(){
        cout<<"THE SUM:"<< num1 + num2;}};
int main(){
    C obj;
    obj.inputNum1();
    obj.inputNum2();
    obj.sum();
    return 0;
}


