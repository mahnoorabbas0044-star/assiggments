#include <iostream>
using namespace std;
main() {
float megabytes;
cout <<" enter size in megabytes :" ;
cin >> megabytes;
float bits = megabytes * 1024 * 1024 * 8 ;
cout << megabytes << " megabytes is equal to " << bits << "bits" << endl ; 
  }