#include <iostream>
using namespace std;

int main() {
    int n;
    int table;
    cout << "enter any number to print table :";
    cin >> n;

    for(int i=1; i<=10; i++) {
        table = n * i;
        cout << table << endl;
    }
    return 0;
}