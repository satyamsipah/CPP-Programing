#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i=1; i<=n; i++) {   //outer loop
        //Spaces
        for(int j=1; j<=(n-i); j++) {   //inner loop
            cout << " ";
        }
        //Stars
        for(int j=1; j<=n; j++) {   //inner loop
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}