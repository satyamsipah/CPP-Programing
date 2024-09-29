#include <iostream>
using namespace std;

void sayhello () {
    cout << "Hello :)\n";
}

void assistant () {
    sayhello ();    //function call
    cout << "Work done\n";
}

int main() {
    assistant();    //function call
    return 0;
}