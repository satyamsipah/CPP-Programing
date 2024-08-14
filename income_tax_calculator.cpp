#include <iostream>
using namespace std;

int main() {
    int income;
    float tax;
    cout << "enter your income in laks :";
    cin >> income;

    if(income > 10){ 
        cout << "30% tax" << endl;
    } else if(income >= 5){
        cout << "20% tax" << endl;
    } else {
        cout << "zero tax" << endl;
    }

    return 0;
}