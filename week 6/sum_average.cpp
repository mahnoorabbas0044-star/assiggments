#include<iostream>
using namespace std;
main(){
    int sum = 0;
    float ave =0;
    int num[5]={1,2,3,4,5};
    for(int idx = 0; idx<5 ; idx = idx+1)
    {
        sum = sum + num[idx];
    } ave = sum/5;
    cout<<" Sum : "<< sum<< endl;
    cout<<" Average : "<< ave<<endl;
}