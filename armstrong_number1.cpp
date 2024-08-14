#include <iostream>
using namespace std;

int main() {
    int n = 153;
    //int num = n;
    //int lastdigcube;
    int cubesum = 0;
    //cout << "enter any number to check armstrong number : ";
    //cin >> n;

    while(n > 0) {          // doubt = infinite loop ho jayega to continue kaise ;
        int lastdig = n % 10;
        //lastdigcube = (lastdig * lastdig * lastdig);
        cubesum += lastdig * lastdig * lastdig;
        n = n / 10;
    }
    cout << cubesum << endl;
    if(n == cubesum) {
        cout << "given number is armstrong number " << endl;
    } else {
        cout << "given number is not armstrong number " << endl;
    }

    return 0;
}