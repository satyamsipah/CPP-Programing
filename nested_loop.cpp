#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i=1; i<=n; i++) {          // outer loop;
        for(int j=1; j<=n; j++) {       // inner loop;
            cout << i << " ";         // work in inner loop;
        }
        cout << endl;
    }
    return 0;
}