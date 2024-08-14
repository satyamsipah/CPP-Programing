#include <iostream>
using namespace std;

int main() {  // largest of two numbers 
    int num1,num2;
    cout << "enter the first number : ";
    cin >> num1;
    cout << "enter the second number : ";
    cin >> num2;

    // replacement of if else 

    int largest = (num1 >= num2) ? num1 : num2;
    cout << "largest is = " << largest << endl;
    return 0;

}