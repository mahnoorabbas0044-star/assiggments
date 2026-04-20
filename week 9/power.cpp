#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num1, num2;
    cout<<" Enter the base number : "<<endl;
    cin>> num1;
    cout<<" Enter the exponent : "<<endl;
    cin>> num2;
    cout<<num1<<" raised to the power "<<num2<< " is : "<<pow(num1 , num2);
    return 0;
} 