#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;

    a++;     // a = a + 1;
    cout << a << endl;
    a--;     // a = a - 1;
    cout << a << endl;
    --a;    // a = a - 1;
    cout << a << endl;
    --a;    // a = a - 1;
    cout << a << endl;

    b = a++;   // post increment 
    cout << b << endl;
    cout << a << endl;
    b = ++a;   // pre increment
    cout << b << endl; 
    cout << a << endl;
    
    return 0;
}