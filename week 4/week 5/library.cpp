#include <iostream>
using namespace std;
int main(){
    while(true){
        string  bookname;
        int choice;
        cout<<" \n------- LIBRARY SYSTEM -------\n"<< endl;
        cout<<" 1. ADD BOOKS "<<endl;
        cout<<" 2. VIEW BOOKS "<<endl;
        cout<<" 3. BORROW BOOKS "<<endl;
        cout<<" 4. ISSUE BOOK "<<endl;
        cout<<" 5. EXIT "<<endl;
        cout<<" ENTER YOUR CHOICE  "<<endl;
        cin>> choice;
        if(choice==1){
            cout<< " ENTER BOOK NAME : ";
            cin>> bookname;
        } else if( choice== 2){
            cout<< " VIEW BOOK ";
            
        } else if (choice== 3 ){
            cout<< " PLEASE BORROW YOUR BOOK ! ";
        
        }else if (choice== 4 ){
            cout<<" YOU HAVE ISSUED BOOK" ;
        } else {
            cout<< " EXIT "<<endl;
        }}
    
}