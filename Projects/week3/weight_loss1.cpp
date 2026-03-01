#include <iostream>
using namespace std;
main() {
string name ;
cout<< " enter the name of the person : " ;
cin >> name ;
float target_weight_loss ;
cout<< " enter the target weight loss in kilograms " ;
cin>> target_weight_loss ;
float total_days = target_weight_loss * 15 ;
cout<< name << " will need " << total_days << " to lose " << target_weight_loss << " kg of weight by following the doctor suggestion " << endl;
    }