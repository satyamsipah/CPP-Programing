#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter the First number : ";
    cin >> a;
    cout << "Enter the Second number : ";
    cin >> b;

    int addition = a + b;
    int subtraction = a - b;
    int product = a * b;
    int divide = a / b;
    
    cout << "Your addition is = " << addition << endl;
    cout << "Your subtraction is = " << subtraction << endl;
    cout << "Your product is = " << product << endl;
    cout << "Your divide is = " << divide << endl;
    
    return 0;
}