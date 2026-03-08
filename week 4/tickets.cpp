#include <iostream>
using namespace std;
main(){
 string country_name;
 float ticket_price;
 float discount_percentage;
 cout<<" Enter Country:  ";
 cin>> country_name;
 cout<< "Ticket's price:  ";
 cin>> ticket_price;
 if (country_name == "Ireland" ){
    discount_percentage = 0.10;
 } else {
    discount_percentage = 0.05;
 }
 float discount = ticket_price * discount_percentage;
 float final_price = ticket_price - discount;
cout<<"DISCOUNTED PRICE :  "<< final_price <<endl;



}