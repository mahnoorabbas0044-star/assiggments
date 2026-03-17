#include<iostream>
using namespace std;
main(){
int choice;
do{
    cout<< " ------- RESTAURANT MANAGEMENT SYSTEM --------"<<endl;
    cout<<"1. View Food menu "<<endl;
    cout<<"2. Place Order "<<endl;
    cout<<"3. View Order Status "<< endl;
    cout<<"4. Generate Bill "<< endl;
    cout<<" 5. CONTACT STAFF "<<endl;
    cout<<" 6. Exit "<< endl;
    cout<< "ENTER YOUR CHOICE (1-6): "<< endl;
    cin>> choice;
    if (choice == 1){
        cout<<" YOU SELECTED : VIEW FOOD MENU "<<endl;
    } else if (choice == 2){
        cout<<" YOU SELECTED : PLACE ORDER "<<endl;
    }else if (choice == 3){
        cout<<" YOU SELECTED : VIEW ORDER "<<endl;
    }else if (choice == 4){
        cout<<" YOU SELECTED : GENERATE BILL "<<endl;
    }else if ( choice == 5){
        cout<< " YOU SELECTED : CONTACT STAFF "<<endl;
    }else if ( choice == 6){
        cout<<" EXITING RESTAURANT MANAGEMENT SYSTEM .\n";
        cout<<" THANK YOU!!";
    }
}while(choice != 6);
return 0;}