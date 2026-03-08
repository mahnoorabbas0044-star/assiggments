#include <iostream>
using namespace std;
main(){
    float speed;
    cout<<" SPEED : ";
    cin>> speed;
    
      if (speed >= 1000) {
        cout<<" Extremely fast";
    }else if ( speed >= 150 ){
        cout << " ultra fast ";
       
    }else if ( speed >= 50 ){
         cout<<" fast";}
         else if ( speed >= 10 ){
        cout<<" average";}
        else if (speed < 10){
            cout<<" slow";
        }
    }