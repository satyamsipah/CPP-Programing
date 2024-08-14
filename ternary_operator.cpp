#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter any number :";
    cin >> num;

    bool even_odd = (num % 2 == 0) ? true : false ; // how true rather than even : odd;
    cout << even_odd << endl;                       // is adult question vote or not ;
    return 0;
}