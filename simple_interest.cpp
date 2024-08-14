#include <iostream>
using namespace std;

int main() {
    int principal,rate,time;
    cout << "enter the principal = ";
    cin >> principal;
    cout << "enter the rate = ";
    cin >> rate;
    cout << "enter the time = ";
    cin >> time;
    int simple_interest = (principal * rate * time) / 100;
    cout << "simple interest is = " << simple_interest << endl;
    
    return 0;
}
