#include <iostream>
#include <cmath>
using namespace std ;
main() {
float players ;
if (players > 10 || players < 1)
cout<< "enter players " ;
cin >> players ;
float imposters ;
if (imposters > 3 || imposters < 0 )
cout << " enter imposters " ;
cin >> imposters ;
float chance = 100 * (imposters/players);
float rounded_chance = round(chance) ;
cout <<" chance = " << rounded_chance << "%" << endl ;
   }