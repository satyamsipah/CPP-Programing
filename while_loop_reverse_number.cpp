#include <iostream>
using namespace std;

int main() {
    int n;
    int result = 0;
    cout << "enter any number : ";
    cin >> n;

    while(n > 0) {
        int lastdig = n % 10;
        result = ( result * 10 ) + lastdig;
        n = n / 10;
    }
    cout << "reverse number is : " << result << endl;
    return 0;
}