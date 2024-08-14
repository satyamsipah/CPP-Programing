#include <iostream>
using namespace std;

int main() {
    int n;
    int sum;
    cout << "enter any number to print n natural numbers : ";
    cin >> n;

    sum = n * (n + 1) / 2;
    cout << "your n natural numbers sum is : " << sum <<endl;

    return 0;
}