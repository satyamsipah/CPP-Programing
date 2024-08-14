#include <iostream>
using namespace std;

int main() {
    cout << (23.5+2+'A') <<endl;   // implicit conversion
    cout << (bool)3+2 << endl;    // explicit conversion
    
    return 0;
}