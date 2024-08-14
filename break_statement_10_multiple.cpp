#include <iostream>
using namespace std;

int main() {
    
    do {
        int n;
        cout << "enter any number : ";
        cin >> n;

        if(n % 10 == 0) {
            cout << "now finally you enter multiple of ten" << endl;
            break;
        } else {
            cout << "enter any other number : ";
        }
        
    } while(true);

    return 0;
}