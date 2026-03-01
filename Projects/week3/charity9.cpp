#include <iostream>
#include <cmath>
using namespace std;
main() {
string name;
cout<< " enter movie name : " ;
cin>> name ;
float adult_tickets_price ;
cout<< "enter adult ticket price : $ " ;
cin>> adult_tickets_price ;
float child_tickets_price ;
cout<< " enter child ticket price : $ " ;
cin>> child_tickets_price ;
float adult_tickets_sold ;
cout<< " enter number of adult tickets sold : " ;
cin>> adult_tickets_sold ;
float child_tickets_sold ;
cout<< "enter number of child tickets sold : " ;
cin>> child_tickets_sold ;
float donation_percentage ;
cout<< " enter percentage of amount to be donated : " ;
cin>> donation_percentage ;
float total_amount = ( adult_tickets_sold * adult_tickets_price ) + (child_tickets_sold * child_tickets_price ) ;
cout<< " total amount generated from ticket sales : $ " << total_amount << endl;
float donation_amount = total_amount * ( donation_percentage / 100 ) ;
float remaining_amount = total_amount - donation_amount ;
cout<< " movie : " << name << endl;
cout<< total_amount <<"$ is the total amount generated from ticket sales" << endl;
cout<< " donation to charity ( " << donation_percentage << "%) : $ " << donation_amount << endl ;
cout<< "remaining amount after donation : $"<< remaining_amount << endl; 
   }