#include<iostream>
using namespace std;
int myFunction(int num);
int main(){
    int num, result;
    cout<<"Enter Number : ";
    cin>>num;
    result = myFunction(num);
    return 0;
}
int myFunction(int num)
{
    int total;
    total = num*5;
    cout<<total;
    return total;
}