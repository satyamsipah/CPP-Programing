#include <iostream>
using namespace std;

int main() {
    float sci;
    float math;
    float eng;

    cout << "enter sci marks : ";
    cin >> sci;
    cout << "enter math marks : ";
    cin >> math;
    cout << "enter eng marks : ";
    cin >> eng;
    
    float avg_marks = (sci + math + eng)/3;
    cout << "Average Marks = " << avg_marks << endl;
    
    return 0;
}