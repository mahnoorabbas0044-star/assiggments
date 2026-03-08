#include<iostream>
using namespace std;
main(){
    int num1 , num2;
    cout<< " please enter the number: ";
    cin>> num1;
    cout<<" please enter second number: ";
    cin>> num2;
    
    if(num1<num2){
        cout<<" Number"<< num2 << "is greater than"<<num1;

    }else{
        cout <<"Number"<< num1 <<"is greater than"<<num2;

    }
}