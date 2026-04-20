#include <iostream>
using namespace std;
float calBalance(float balance, int y) {
    float interestRate = 0.0;
    if (balance < 10000) {
        interestRate = 0.05;  
    } else if (balance >= 10000 && balance <= 50000) {
        interestRate = 0.07;  
    } else {
        interestRate = 0.10;   
    }
    if (y >= 3) {
        interestRate += 0.02;
    }
    float updatedBalance = balance + (balance * interestRate);
    return updatedBalance;
}
int main() {
    float balance;
    int y;
    cout << "Enter Balance: ";
    cin >> balance;
    cout << "Enter Years: ";
    cin >> y;
    float result = calBalance(balance, y);
    cout << "Updated Balance: " << result << endl;
    return 0;
}