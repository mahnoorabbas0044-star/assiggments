#include <iostream>
#include<cmath>
using namespace std;
main() {
float veg_price_per_kg ;
cout<< " enter vegetable price per kilogram (in coins) : " ;
cin>> veg_price_per_kg ;
float fruit_price_per_kg ;
cout<< " enter fruit price per kilogram (in coins) : " ;
cin>> fruit_price_per_kg ;
int total_kg_veg ;
cout<< " enter total kilograms of vegetables : " ;
cin>> total_kg_veg;
int total_kg_fruit ;
cout<< " enter total kilogram of fruits : " ;
cin>> total_kg_fruit;
float total_veg_coins = veg_price_per_kg * total_kg_veg ;
float total_fruit_coins = fruit_price_per_kg * total_kg_fruit ;
float total_coins = total_veg_coins + total_fruit_coins ;
float total_rupees = total_coins/1.94 ;
cout<< " total earnings in rupees(rps) : " << total_rupees << endl;
  }

