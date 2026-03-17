#include<iostream>
using namespace std;
int main(){
    int key, choice;
    int right_key = 1234;
    int balance = 1000;
    int amount;
    for(int i=0; i<= 3; i++){
        cout <<" Enter ATM pin : "<< endl;
        cin>> key;
        if (key == right_key){
            cout<< " LOGIN SUCCESSFUL"<< endl;
            break;
            }
            else {
            cout<<" INCORRECT PIN "<< endl;
            }
    }for(;;){
        cout<<" ------------- ATM  MENU ---------------"<< endl;
        cout<<" 1. CHECK BALANCE "<<endl;
        cout<<" 2. DEPOSIT MONEY "<<endl;
        cout<<" 3. WITHDRAW MONEY "<< endl;
        cout<<" 4. EXIT "<< endl;
        cout<<" ENTER  CHOICE ";
        cin>> choice;
        if( choice == 1){
            cout<<" CURRENT BALANCE :  "<<balance << endl; 
        }else if( choice == 2){
            cout<< " ENTER AMOUNT TO DEPOSIT :  ";
            cin>> amount;
            if( amount > 0){
                balance = balance + amount;
                cout<< " MONEY  DEPOSITED  SUCCESSFULLY ";
            }else if (amount<0){
                cout<< " ";
            }
        }else if ( choice == 3 ){
            cout<<"ENTER AMOUNT TO WITHDRAW : ";
            cin>> amount;
            if (amount > 0 && amount<= balance ){
                balance =balance -  amount;
                cout<< " PLEASE COLLECT YOUR CASH ";
            }else if ( amount> balance || amount<= 0){
            cout<<"  enough money not present  ";}
        }else if( choice == 4){
            cout<<" THANK YOU FOR USING ATM"<< endl;
            break ;
        }
    }
}