#include <iostream>
using namespace std;

int main() {
    int income;
    float tax;
    cout << "enter your income in laks :";
    cin >> income;

    if(income > 10){
        tax = 0.3 * income;
    } else if(income >= 5){
        tax = 0.2 * income;
    } else {
        tax = 0;
    }

    cout << "tax is : " << (tax * 100000) << endl;
    return 0;
}