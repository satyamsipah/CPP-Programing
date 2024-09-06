#include <iostream>
using namespace std;

int main() {
    int n = 4;
    //1st Pyramid
    for(int i=1; i<=n; i++) {   //outer loop
        //Spaces
        for(int j=1; j<=n-i; j++) {   //inner loop
            cout << " ";
        }
        //Stars
        for(int j=1; j<=(2*i-1); j++) {    //inner loop
            cout << "*";
        }
        cout << endl;
    }
    //2nd Pyramid
    for(int i=n; i>=1; i--) {   //outer loop
        //Spaces
        for(int j=1; j<=(n-i); j++) {   //inner loop
            cout << " ";
        }
        //Stars
        for(int j=1; j<=(2*i-1); j++) {   // inner loop
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}