#include <iostream>
using namespace std;
main() {
int wins;
cout <<"  enter the number of wins :";
cin>> wins;
int draws;
cout <<" enter number of draws :" ;
cin>> draws ;
int losses;
cout <<" enter number of losses :" ;
cin>> losses ;
int totalpoints = (wins *3) + (draws * 1) + (losses * 0) ;
cout << " Pakistan has obtained "<< totalpoints << " in Asia Cup Tournament "<< endl;
   }