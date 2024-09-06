#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i=1; i<=n; i++) {
        //Spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        //Stars
        for(int j=1; j<=i; j++) {   // you can use k replaced with j
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}