 #include <iostream>
 using namespace std;

 int main() {
    int n;
    cout << "enter any number : ";
    cin >> n;

    int i = 10;              // enter number should be greater than 10 
    while(i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
 }