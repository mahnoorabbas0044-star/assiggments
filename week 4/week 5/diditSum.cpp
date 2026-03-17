#include <iostream>
using namespace std;
main(){
    int num;
    cout<< " Enter a number : ";
    cin>> num;
    int sum = 0;
    int temp = num;
    while( temp > 0){
        int digit = temp % 10;
        sum += digit;
        temp/= 10;
    }cout<< "Sum of digits : "<< sum<< endl;
}