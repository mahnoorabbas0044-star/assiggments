#include<iostream>
#include <string>
using namespace std;
string checkAlphabetCase(char ch) {
    if (ch == 'A') {
        return "You have entered capital A";
    } else if (ch == 'a') {
        return "You have entered small a";
    } else {
        return "Invalid input.";
    }
}
int main() {
    char input;
    cout << "Enter a character (A/a): ";
    cin >> input;
    cout << checkAlphabetCase(input) << endl;
    return 0;
}