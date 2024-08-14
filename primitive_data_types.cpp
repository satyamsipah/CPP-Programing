#include <iostream>
using namespace std;

int main() {
    int age = 25;
    char grade = 'A';
    bool isAdult = true;
    float pi = 3.14159265359;
    double pi1 = 3.14159265359;
    cout << "size of int in bytes = " << sizeof(int) << endl;
    cout << "size of char in bytes = " << sizeof(char) << endl;
    cout << "size of bool in bytes = " << sizeof(bool) << endl;
    cout << "size of float in bytes = " << sizeof(float) << endl;
    cout << "size of double in bytes = " << sizeof(double) << endl;
    cout << "age = " << age << endl;
    cout << "grade = " << grade << endl;
    cout << "is Adult = " << isAdult << endl;
    cout << "value of pi = " << pi << endl;
    cout << "value of pi1 = " << pi1 << endl;
    
    return 0;
}