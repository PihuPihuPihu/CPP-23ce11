#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

template <>
string add<string>(string a, string b) {
    return a + " " + b;
}

int main() {
    int int1 = 5, int2 = 10, int3 = 20;
    cout << "Addition of two integers: " << add(int1, int2) << endl;
    cout << "Addition of three integers: " << add(int1, int2, int3) << endl;

    double double1 = 3.5, double2 = 2.5;
    cout << "Addition of two doubles: " << add(double1, double2) << endl;

    string str1 = "Hello", str2 = "World";
    cout << "Concatenation of two strings: " << add(str1, str2) << endl;

    return 0;
}
