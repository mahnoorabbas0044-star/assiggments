#include <iostream>
using namespace std;
main(){
    int age, machine_price,toy_price;
    cout<<" Enter lily's age :  ";
    cin>> age;
    cout<<" Enter price of wahing machine :   ";
    cin>> machine_price;
    cout<<" Enter unit price of each toy :   ";
    cin>> toy_price;
    int present_money=10, saving=0, toy=0;
    for(int i=1;i<=age;i++){
        if (i%2==0){
            saving+=(present_money-1);
            present_money+=10;
        }else{
            toy= toy+1;
        }
    }int toy_earn = toy_price* toy;
    int tot_money = toy_earn + saving;
    if(tot_money> machine_price){
        cout<<" YES!!! "<< endl;
        int remaining = tot_money-machine_price;
        cout<<"  "<< remaining;
    }else{
        cout<<" NO!!! "<<endl;
        int insufficient = machine_price-tot_money;
        cout<<"  "<< insufficient<<endl;
    }
}