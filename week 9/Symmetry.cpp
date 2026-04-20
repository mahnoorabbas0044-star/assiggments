#include <iostream>
using namespace std;
bool isSymmetrical(int num) {
    int orig = num;
    int rev = 0;
    while (num > 0) {
        int digit = num%10;
        rev = rev * 10+digit;
        num /= 10;
    }

    return (orig == rev);
}

int main() {
    int num;
    cout << "Enter a  three digit number: ";
    cin >> num;
    if(num<100 || num>999){
        cout<<"  "<<endl;
    }else{

    if (isSymmetrical(num)) {
        cout << num << " is symmetrical." << endl;
    } else {
        cout << num << " is not symmetrical." << endl;
    }
}

    return 0;
}