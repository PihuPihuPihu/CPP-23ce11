#include <iostream>
using namespace std;
class ISPrime;
class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    friend class ISPrime;
};
class ISPrime {
public:
    bool Prime(Number& num) {
        if (num.value <= 1) return false;
        for (int i = 2; i <= num.value / 2; ++i) {
            if (num.value % i == 0) return false;}
        return true;}};
int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    Number num(input);
    PrimeChecker checker;
    if (checker.isPrime(num)) {
        cout << input << " is a prime number." << endl;
    } else  cout << input << " is not a prime number." << endl;
    return 0;
}
