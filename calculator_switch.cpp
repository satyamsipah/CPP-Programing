#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    char op;    // op = operator 
    cout << "enter first number :";
    cin >> num1;
    cout << "enter second number :";
    cin >> num2;
    cout << "enter the operator :";
    cin >> op;

    switch(op) {
        case '+' : cout << "your sum is = " << (num1 + num2)  << endl; 
            break;
        case '-' : cout << "your subtraction is = " << (num1 - num2) << endl;
            break;
        case '*' : cout << "your Multiplication is = " << (num1 * num2) << endl;
            break;
        case '/' : cout << "your devision is = " << (num1 / num2) << endl;
            break;
        default : cout << "invalid operator" << endl;
}
    return 0;
}
