#include <iostream>
using namespace std;

int main() {
    int n = 10;

    n += 5;                   // n = n + 5 => 15
    cout << n << endl;    
    n -= 5;     // value of n updated in each assignment step;      // n = n - 5 => 10
    cout << n << endl;
    n *= 5;                   // n = n * 5 => 50
    cout << n << endl;
    n /= 5;                   // n = n / 5 => 10
    cout << n << endl;

    return 0;
}