#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "enter any number : ";
    cin >> n;

    while(n > 0) {
        int lastdig = n % 10;
        sum = sum + lastdig;
        n = n / 10;
    }
    cout << "sum is : " << sum << endl;
    return 0;
}