#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3;
    cout << "enter first numbers :";
    cin >> num1;
    cout << "enter second numbers :";
    cin >> num2;
    cout << "enter third numbers :";
    cin >> num3;

   /*
    if(num1 > num2 && num1 > num3){
        cout << "first number is greater" << endl;
    } else if(num2 > num3 && num2 > num1){
        cout << "second number is greater " << endl;
    } else {
        cout << "third number is greater " <<endl; 
    } 
    */

    if( num1 >= num2 && num1 >= num3){
        cout << "first number is greater" << endl;
    } else if(num2 >= num3){
        cout << "second number is greater" << endl;
    } else {
        cout << "thirs number is greater" << endl;
    }
    return 0;

}