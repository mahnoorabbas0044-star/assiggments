#include <iostream> 
using namespace std;
main() {
float initial_velocity ;
cout<< " enter initial velocity (m/s): " ;
cin>> initial_velocity ;
float acceleration ;
cout<< " enter acceleration (m/s^2) : " ;
cin>> acceleration ;
float time ;
cout<< " enter time (s)" ;
cin>> time ;
float final_velocity =  initial_velocity + ( acceleration * time );
cout << " final velocity = " << final_velocity << endl ;
   }