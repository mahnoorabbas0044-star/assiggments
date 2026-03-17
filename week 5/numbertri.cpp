#include<iostream>
using namespace std;
main(){
    for(int i=0;i<5;i++){
        int num = 5;
        for( int j=0;j<=i;j++ ){
            cout << num << "    ";
            num--;
        }cout<< endl   ;
    }
}