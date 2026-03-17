#include <iostream>
     using namespace std;
    int main() {
           while (true) {
        int choice;
        cout << "  =========== MENU ==========  " << endl;
        cout << "1. SAY HELLO " << endl;
        cout << "2. SAY GOODBYE" << endl;
        cout << "3. EXIT  " << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1){
            cout << "Hello! Welcome to the Program." << endl;}
        else if (choice == 2){
            cout << "Goodbye! Have a Nice Day." << endl;}
        else if (choice == 3){
            cout << "Program Ended." << endl;}
        else {cout << "Invalid Choice!!!" << endl;}}
}
