#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "enter any number : ";
    cin >> n;

    for(int i=1; i<=n; i++) {
         sum = sum + i;
    }
    cout << "your sum is : " << sum << endl;
    return 0;
}