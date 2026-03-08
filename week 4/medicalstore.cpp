#include<iostream>
using namespace std;
main(){
    float bill,discount;
    cout<<" enter your bill:  ";
    cin>> bill;
    if (bill <= 5000) {
        discount = bill * (1-0.05);

    }else{
        discount = bill * (1-0.10);
    }cout<<" Your discount bill is :"<< discount << endl;

}