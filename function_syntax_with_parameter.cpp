#include <iostream>
using namespace std;

int sum(int a, int b) {     // a, b are parameters
    int sum = a + b;
    return sum;
}

int main() {
    int ans = sum(1, 2);    // 1, 2 are arguments
    cout << "sum is : " << ans << endl;
    return 0;
}