 #include <iostream>
 using namespace std;

 int main() {
    int n;
    cout << "enter any number : ";
    cin >> n;

    int count = 1;                  // replaced count = i && doing from i = 0;
    while(count <= n) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;
 }