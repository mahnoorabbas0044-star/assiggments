#include<iostream>
using namespace std;
main(){
     while(true){
    int option,num_1,num_2;
    cout<<"------ SIMPLE CALCULATOR -------- "<<endl;
    cout<<"1. ADDITION "<<endl;
    cout<<"2. SUBTRACTION  "<<endl;
    cout<<"3.MULTIPLICATION "<<endl;
    cout<<"4.DIVISION "<<endl;
    cout<<"5.CLEAR SCREEN  "<<endl;
    cout<<"6.EXIT    "<<endl;
    cout<<" ENTER YOUR CHOICE(1-6) :  "<<endl;
    cin>> option;
    if(option == 5){
    cout<<"SCREEN CLEARED" <<endl; }
    else{
        cout<<"EXITING CALCULATOR. GOODBYE!!! "<<endl;
        break;
    cout<<"ENTER FIRST NUMBER :  "<<endl;
    cin>> num_1;
    cout<<" ENTER SECOND NUMBER :  "<<endl;
    cin>> num_2;
        if(option == 1){
            cout<<" RESULT : "<<num_1 + num_2<<"  "<<endl;}
            else if( option == 2){
                cout<<" RESULT"<<num_1-num_2<<"  "<<endl;}
           else if (option == 3){
            cout<<" RESULT : "<<num_1*num_2<<"  "<<endl;}
          else if (option == 4) {
            cout<<" RESULT : "<<num_1/num_2<<"   "<<endl;}
        }
    }
}