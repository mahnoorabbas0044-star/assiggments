#include<iostream>
using namespace std;
int function(int num);
int main()
{
    int num , result;
    cout<<"Enter a five digit number : ";
    cin>>num;
    result = function(num);
    
     if (result%2 == 0){
        cout<<"Evenish";
        
    }else {
        cout<<"Oddish";
    }
}
int function(int num)
{
    int a=num/10000;
    int b=num/1000 %10;
    int c=num/100 %10;
    int d=num/10 %10;
    int e=num%10;
    int result = a+b+c+d+e;
    return result;
} 
