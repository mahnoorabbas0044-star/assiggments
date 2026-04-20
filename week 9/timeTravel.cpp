#include <iostream>
using namespace std;

int main() {
    int hour, min;
    cout << "Enter Hours:";
    cin >> hour;
    cout << "Enter Minutes:";
     cin >>min;
    min = min + 15;
    if (min >= 60) {
        min = min - 60;
        hour = hour + 1;
    }
    if (hour >= 24) {
        hour = 0;
    }
    cout << hour << ":" << min;
    return 0;
}