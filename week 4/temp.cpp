#include <iostream>
using namespace std;
main(){
    int temp_1;
    cout<<" Temperature City 1:  ";
    cin>> temp_1;
    int temp_2;
    cout<<" Temperature City 2:  ";
    cin>> temp_2;
    int difference = temp_1 - temp_2;
    if( difference > 10){
        cout<<"Difference is too Big ";
        cout<<" Program Ends";
    }else {
        cout<<"Program Ends";
    }
}