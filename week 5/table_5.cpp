#include <iostream>
using namespace std;
main(){
    int multiple;
    int num;
    cout<< " Enter a number ";
    cin>> num;
    for(int i = 1; i<= 10 ; i++ ){
        multiple = num * i;
        cout<<  num <<" * " << i<< " = " << multiple<<endl;
    }
}