#include <iostream>
using namespace std;

void convert(int num) {

    string ones[] = {"", "One", "Two", "Three", "Four", "Five",
                     "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                      "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                     "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num <= 9)
        cout << ones[num];
    else if (num <= 19)
        cout << teens[num - 10];
    else {
        cout << tens[num / 10];
        if (num % 10 != 0)
            cout << " " << ones[num % 10];
    }
}

int main() {
    int num;
    cout << "Enter a number(1 to 99):";
    cin >> num;
    convert(num);
    return 0;
}