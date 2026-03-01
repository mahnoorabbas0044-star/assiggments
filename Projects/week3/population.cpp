#include <iostream>
using namespace std;
main() {
int current_population;
cout<< " enter current world population ";
cin>> current_population;
int monthly_birth_rate;
cout<< " enter monthly birth rate : ";
cin>> monthly_birth_rate ;
int final_population = current_population + monthly_birth_rate * 360 ;
cout<< " population in three decades will be "<< final_population << endl;
   }