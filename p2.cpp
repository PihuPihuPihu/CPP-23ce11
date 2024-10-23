#include <iostream>

using namespace std;

class SwapNumbers {
public:
    SwapNumbers(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    int x = 10, y = 20;
    SwapNumbers swap(x, y);
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}
