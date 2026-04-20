#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the second number : "<<endl;
    cin>>num2;
    cout<<" The minimum of "<<num1<<" and "<<num2<<" is "<< min(num1 , num2);
    return 0;
}