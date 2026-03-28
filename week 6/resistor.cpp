#include<iostream>
using namespace std;
double tot_resitance (double resistors[],int size){
    double tot=0;
    for(int i=0;i<size;i++){
        tot+= resistors[i];
    }return tot;
}main(){
    int n;
    cout<<" Enter number of resistors in the series circuit : "<<endl;
    cin>>n;
    double resistors[n];
    cout<<" Enter the resistance values (in ohms) of the "<<n<< " resistors, one per line : "<<endl;
    for (int i=0;i<n;i++){
        cin>> resistors[i];
    }cout<<" The Total Resistance of the series circuit is "<<tot_resitance(resistors,n)<<"ohms"<<endl;
}