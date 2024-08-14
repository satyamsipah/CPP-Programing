#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout << "entr first numbers : ";
    cin >> num1;
    cout << "entr second numbers : ";
    cin >> num2;

    if(num1 > num2){
        cout << "first number is greater" << endl;
    } else {
        cout << "second number is greater" << endl; 
    }

    return 0;
}