#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    for(int i=1; i<=n; i++) {
        cout << "*";  // first star
        for(int j=1; j<=(n-1); j++) {
            if(i == 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "*" << endl;  // last star
    }
    return 0;
}