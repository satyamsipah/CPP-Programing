#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number to check even or odd : ";
    cin >> num;

    if(num % 2 == 0){
        cout << "even number" << endl;
    } else {
        cout << "odd number" << endl;
    }

    return 0;
}