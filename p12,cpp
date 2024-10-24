#include <iostream>
using namespace std;
class Student;
void StudentDisplay(Student& s);
class Student {
private:
    int age;
    string name;
    string department;
    string course;
public:
    Student(int a, string n, string d, string c) : age(a), name(n), department(d), course(c) {}
    friend void displayStudentDetails(Student& s);
};

void StudentDisplay(Student& s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    Student student(20, "Alice", "Computer Science", "Software Engineering");
    displayStudentDetails(student);
    return 0;
}
