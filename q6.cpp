#include <iostream>
using namespace std;

void sum(int a, int b) {
    cout << "Sum of 2 numbers: " << (a + b) << endl;
}

void sum(int a, int b, int c) {
    cout << "Sum of 3 numbers: " << (a + b + c) << endl;
}

void sum(int a, int b, int c, int d) {
    cout << "Sum of 4 numbers: " << (a + b + c + d) << endl;
}

int main() {
    sum(5, 10);
    sum(5, 10, 15);
    sum(5, 10, 15, 20);

    return 0;
}
