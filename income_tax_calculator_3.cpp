#include <iostream>
using namespace std;

int main() {
    int income;
    float tax;
    cout << "enter income in laks : ";
    cin >> income;

    if(income < 2.5) {
        tax = 0;
    } else if(income <= 5) {
        tax = 0.05 * income;
    } else if(income <= 7.5) {
        tax = 0.1 * income;
    } else if(income <= 10) {
        tax = 0.15 * income;
    } else if(income <= 12.5) {
        tax = 0.2 * income;
    } else {
        tax = 0.3 * income;
    }

    cout << "your tax is : " << (tax * 100000) << endl; 

    return 0;
}