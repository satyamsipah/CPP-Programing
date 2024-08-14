#include <iostream>
using namespace std;

int main() {

    do {
        int n;
        cout << "enter any number : ";
        cin >> n;

        if(n % 10 == 0) {
            continue;
        } 

        cout << "you enter number is : " << n << endl;

    } while(true);

    return 0;
}