#include <iostream>
using namespace std;
main() {
int n ;
cout <<" enter paint area " ;
cin>> n ;
int w ;
cout <<" enter width : " ;
cin >> w ;
int h ;
cout <<" enter height : " ;
cin>> h ;
int area = w * h ;
int complete_walls = n/area ;
cout << "walls painted = " << complete_walls << endl;
   }