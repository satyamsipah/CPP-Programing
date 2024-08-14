#include <iostream>
using namespace std;

int main() {
    float pensil,pen,eraser;
    cout << "enter cost of pensil = ";
    cin >> pensil;
    cout << "enter cost of pen = ";
    cin >> pen;
    cout << "enter cost of eraser = ";
    cin >> eraser; 

    float bill_cost = (pensil + pen + eraser);
    cout << "bill cost = " << bill_cost << endl;
    float gst = (pensil + pen + eraser) * (0.18);
    cout << "GST is = " << gst << endl;
    float total_bill = bill_cost + gst;
    cout << "total bill = " << total_bill << endl;
    
    return 0;
}