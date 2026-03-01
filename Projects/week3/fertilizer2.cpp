#include <iostream>
using namespace std ;
main() {
float bag_weight ;
cout << " enter the size of fertilizer bag in pounds " ;
cin>> bag_weight ;
float bag_price ;
cout<<" enter the cost of bag = $ " ;
cin>> bag_price ;
float bag_area ;
cout <<" enter area in square feet that can be covered by bag " ;
cin>> bag_area ;
float cost_per_pound = bag_price / bag_weight ;
cout << " cost of fertilizer per pound = $ "<< cost_per_pound ;
float cost_per_square_foot = bag_price / bag_area ;
cout<<" cost of fertilizing per square foot = $ " << cost_per_square_foot ;
   }
