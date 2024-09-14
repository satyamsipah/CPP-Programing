#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i=1; i<=n; i++) {
        // Print spaces before the numbers
        for(int j=1; j<=n-i; j++) {
            cout << "  ";
        }

        // Print decreasing part of the pattern
        for(int j=i; j>=1; j--) {
            cout << j << " ";
        }
        
        // Print increasing part of the pattern
        for(int j=2; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
