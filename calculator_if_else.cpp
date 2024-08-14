#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    char op;    // op = operator
     
    cout << "enter first number : ";
    cin >> num1;
    cout << "enter second number : ";
    cin >> num2;
    cout << "enter the operator : ";
    cin >> op;

    if(op == '+') {
        cout << "your sum is : " << (num1 + num2) << endl;
    } else if(op == '-') {
        cout << "your subtraction is : " << (num1 - num2) << endl;
    } else if(op == '*') {
        cout << "your multiplication is : " << (num1 * num2) << endl;
    } else if(op == '/') {
        cout << "your division is : " << (num1 / num2) << endl;
    } else {
        cout << "invalid operator : " << endl;
    }
    
    return 0;
}