#include<iostream>
using namespace std;
main(){
    int coins[4];
    float tot_due;
    int quarters,dimes,nickels,pennies;
    cout<<" Enter quarters:\n ";
    cout<<" Enter dimes: \n";
    cout<<" Enter nickels: \n";
    cout<<" Enter pennies: \n";
    for(int i=0;i<4;i++){
        cin>>coins[i];
    }cout<<" Enter the total amount due : $";
    cin>> tot_due;
    float tot_money=coins[0]*0.25+coins[1]*0.10+coins[2]*0.05+coins[3]*0.01;
    if(tot_money>=tot_due){
        cout<<" Can you pay the amount? Yes"<<endl;
    }else{
        cout<<" Can you pay the amount? No"<<endl;
    }
}