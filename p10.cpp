#include <iostream>
using namespace std;
class Student {
public:
    inline void Sum(int a, int b) {
        cout << "Sum: " << (a + b) << endl;
    }
};
int main() {
    Student Amit;
    int n1,n2;
    cout<<"ENTER TWO NUMBERS:";
    cin>>n1>>n2;
    student.Sum(n1,n2);
    return 0;
}
