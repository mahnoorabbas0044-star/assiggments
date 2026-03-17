#include <iostream>
using namespace std;
main(){int i,j;
    for( int i=1; i<=3; i++)
    {  for( j= 1; j<=i ; j++)
       { cout<<" * ";
    }cout<< endl;}
    for(int i = 4; i<= 5; i++){
        for( j=1; j<=i; j++){
        cout<<" * ";}
        cout<< endl;
    }for( int i= 5; i>=1; i--){
    for( j=1; j<=i; j++){
        
        cout<<" * ";}
        cout<< endl;
    }
}
