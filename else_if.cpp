#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "enter math marks : ";
    cin >> marks;

    if(marks >= 90){
        cout << "grade A" << endl;
    } else if(marks >=40){
        cout << "pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}