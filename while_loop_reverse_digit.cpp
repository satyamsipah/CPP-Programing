#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter any number : ";
    cin >> n;

    while(n > 0) {
        int lastdig = n % 10;
        cout << lastdig << " ";
        n = n / 10;
    }
    cout << endl;
    return 0;
}