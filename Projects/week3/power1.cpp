#include <iostream>
using namespace std;
main (){
float voltage;
cout << " enter voltage ( in volts ) : " ;
cin>> voltage ;
float current;
cout<< " enter current ( in amperes ) : " ;
cin >> current;
float power = voltage * current ;
cout << " the power is " << power << " watts" << endl;
  }