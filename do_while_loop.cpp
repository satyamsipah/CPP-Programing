#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    cout << "enter any number to print 1 to n : ";
    cin >> n;

    do{
        cout << i << " ";
        i++;
    } while(i <= n);

    cout << endl;
    return 0;
}