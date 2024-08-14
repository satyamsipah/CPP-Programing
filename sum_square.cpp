#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout << "enter first numbers for thier sum of square :";
    cin >> num1;
    cout<< "enter second numbers for thier sum of square :";
    cin >> num2;
    int ans = (num1 + num2) * (num1 + num2);
    cout << "your sum of square is = " << ans << endl;
    
    return 0;
}