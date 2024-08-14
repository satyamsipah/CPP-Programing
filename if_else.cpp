#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "enter your age :";
    cin >> age;

    if(age >= 18) {
        cout << "can vote" << endl;
    } else {
        cout << "can not vote" << endl;
    }
    if(age >= 25) {
        cout << "contest for election" << endl;
    }

    return 0;
}