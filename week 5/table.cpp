#include <iostream>
using namespace std;
main(){
    int multiple;
    int n1= 24;
    cout << " ----Multiplication table of 24----"<< endl;
    for(int num = 1; num<= 10; num = num +1)
    {
        multiple = n1 * num;
        cout<< n1 << " * "<< num << " = " << multiple<< endl;
    }
    int multiply;
    int n2 = 50;
     cout<<" ----Multiplication table of 50 ----"<< endl;
    for( int num = 1; num <= 10; num = num+1)
    {
        multiply = n2 * num;
        cout<< n2 << " * "<< num << " = "<< multiply<< endl;
    }
    int mult ;
    int n3 = 29;
    cout<< " ----Multiplication table of 29----"<< endl;
    for( int num = 1; num<= 10; num = num + 1)
    {
        mult = n3 * num;
        cout<< n3 << " * "<< num << " = "<< mult<< endl;

    }
}