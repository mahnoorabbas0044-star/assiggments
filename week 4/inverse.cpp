#include<iostream>
using namespace std;
main(){
    float first_num ;
    float sec_num ;
    char oper;
    cout<< " Welcome to the calculator ";
    cout<< " Enter 1st number: ";
    cin >> first_num;
    cout<< " ENTER THE OPERATOR : ";
    cin>> oper;
    cout<<" Enter 2nd number: ";
    cin >> sec_num;
    float subt = first_num - sec_num;
    float add = first_num + sec_num;
    float mult = first_num * sec_num;
    float div = first_num / sec_num;  
    if (oper == '+'){
    cout << first_num << "-" << sec_num << "="<< subt;
    }
    if (oper == '-'){
        cout<< first_num<< "+" << sec_num << "=" << add;

    } if (oper == '*'){
        cout<< first_num << "/" << sec_num << "=" << div;

    }if (oper == '/'){
        cout<< first_num << "*" << sec_num << "=" << mult;

    }
}