#include <iostream>
using namespace std;
class NaturalNumbers {
public:
    NaturalNumbers(int n = 10) {
        for (int i = 1; i <= n; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }
};
int main() {
    NaturalNumbers n;
    NaturalNumbers numero(10);
    return 0;
}
