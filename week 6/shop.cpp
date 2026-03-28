#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
main(){
    int n;
    cout<<" Enter number of products : "<<endl;
    cin>>n;
    string prod[n];
    double price[n];
    int quant[n];
    for(int i=0;i<n;i++){
        cout<<" Enter name of product "<<i+1<<" :";
        cin>>prod[i];
        cout<<" Enter price of "<<prod[i]<<" : $";
        cin>> price[i];
        cout<<"Enter quantity of "<<prod[i]<<" :";
        cin>>quant[i]; 
    }cout<<"\n PRODUCT INVENTORY REPORT"<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"-------------------------"<<endl;
    for(int i=0;i<n;i++){
        double tot = price[i]*quant[i];
        cout<<prod[i]<<" : $"<<price[i]<<","<<quant[i]<<" in stock, Total value : $"<<tot<<endl;
    }
}