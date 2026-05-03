#include<iostream>
using namespace std;
void swapValues(int &a ,int &b){
    int temp = a;
    a = b;
    b = temp;

}
int main(){
    int x, y;
    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>>y;
    cout<<"Before the swapping : "<<endl;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    swapValues(x , y);
    cout<<"After the swapping : "<<endl;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    return 0;
}