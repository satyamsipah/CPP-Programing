#include <iostream>
using namespace std;

void sayhello() {   //forward declaration
    cout << "Hello world";
}

int main() {
    sayhello();    //function call
    return 0;
}