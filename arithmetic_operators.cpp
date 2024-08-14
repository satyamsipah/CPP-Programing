#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 3;
    int c = 2;

    // Binary operators
    cout << " addition : " << a + b << endl;
    cout << " substraction : " << a - b << endl;
    cout << " multiply : " << a * b << endl;
    cout << " divide : " << a / b << endl;
    cout << " modulo : " << a % b << endl;

    // Unary operators
    c++;    // increment;
    cout << " c = " << c << endl;
    c--;   // decrement;   // updated value of c used;
    cout << " c = " << c << endl;

    return 0;
}