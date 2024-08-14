#include <iostream>
using namespace std;

int main() {
    int n;
    bool isprime;
    cout << "enter any number to check prime or not : ";
    cin >> n;

    for(int i=2; i<n; i++) {
        if(n == 2) {
            isprime = true;
        }
        else if(n % i == 0) {
            isprime = false;
            break;
    }
    }

    if(isprime == false) {
        cout << "given number is non-prime " << endl;
    } else {
        cout << "given number is prime " << endl;
    }

    return 0;
}