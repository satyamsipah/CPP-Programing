#include <iostream>
using namespace std;

int main() {  // name changed do like upper_diagonal_star_pattern.cpp
    int n = 4;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}