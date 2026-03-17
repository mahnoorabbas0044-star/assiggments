#include<iostream>
using namespace std;
main(){
    int orig_num ;
    int digit;
    int temp_num;
    int count = 0;
     cout<< " Enter number :  "<< endl;
    cin>> orig_num;
      cout<<" Enter digit :  "<< endl;
      cin>> digit;
      temp_num = orig_num;
    while ( temp_num != 0){
        if (temp_num % 10 == digit){
            count ++;
    }temp_num /=10;
        
    } 
      cout<<" Frequency of "<< digit << " in "<< orig_num <<" is : "<< count << endl;
}