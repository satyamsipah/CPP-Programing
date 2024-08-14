#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "enter year : ";
    cin >> year;

    if(year % 4 == 0) {                                             // uncompleted code ;
        cout << "this is leap year" << endl;
    } else {
        cout << "this is not leap year" << endl;
    }

    return 0;
}