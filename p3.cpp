#include <iostream>
using namespace std;
class Array {
private:
    int* arr;
    int size;
public:
    Array(int s) : size(s) {
        arr = new int[size];}
    Array(const Array& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];}}
    void input() {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];}}
    int* getArray() const {
        return arr;}
    int getSize() const {
        return size;} };

class SumOfPositive {
public:
    static int calculate(const Array& arr) {
        int sum = 0;
        for (int i = 0; i < arr.getSize(); i++) {
            if (arr.getArray()[i] > 0) {
                sum += arr.getArray()[i];}}
        return sum;}};

void main() {
    int n;
    cout<<"ENTER THE SIZE OF ARRAY:";
    cin >> n;
    Array arr(n);
    cout<<"ENTER THE ARRAY:";
    arr.input();
    Array copyArr = arr;
    cout << SumOfPositive::calculate(copyArr) << endl;}
