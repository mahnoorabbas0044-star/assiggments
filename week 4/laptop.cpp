#include <iostream>
using namespace std;
main(){
    float salary = 10000;
    float laptop_price = 50000;
    float adv_percentage = 0.5;
    float months_requested = 6;
    float advance = (salary * adv_percentage) * months_requested;
    float months_required = laptop_price / (salary * adv_percentage);
    if (advance >= laptop_price){
        cout<<"Ali can buy the laptop with advance salary";

    }  else{
        cout<<" months required to buy laptop:"<<months_required<< endl;
    }
}