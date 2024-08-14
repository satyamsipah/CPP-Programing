#include <iostream>
using namespace std;

int main() {
    cout << ((3 < 5) || ( 8 == 9)) << endl;     // output of logical operator in form of ( 0 and 1 );
    cout << ((5 > 2) || ( 9 > 8)) << endl;              // 0 = false;  and  1 = true;
    cout << ((5 > 2) && (4 > 3)) << endl;
    cout << ((5 > 2) && (3 > 4)) << endl;
    cout << !(5 > 2)  << endl;
    cout << !(5 < 2) << endl;

    return 0;
}