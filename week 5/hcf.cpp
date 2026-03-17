#include <iostream>
using namespace std;
int hcf(int a , int b){
    while(a != b){
        if(a > b){
            a-=b;
        }else{
            b-= a;
        }}return a;}
 int lcm(int a, int b){
    float prod = a*b;
    int comDiv = hcf( a, b);
    return  prod/comDiv;}
 main()
{int num_1 , num_2;
 cout<< " Enter the first number : ";
 cin>> num_1;
 cout<<" Enter the second number : ";
 cin>> num_2;
 cout<< " GCD : "<< hcf(num_1 , num_2) << endl;
 cout<<" LCM : " << lcm( num_1 , num_2)<< endl;}