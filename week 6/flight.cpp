#include<iostream>
#include<string>
using namespace std;
main(){
    int n;
    cout<<" Enter number of flights : ";
    cin>>n;
    int flight_num[n];
    string desti[n];
    int seat_num[n];
    for(int i=0;i<n;i++){
        cout<<"Enter flight number for flight "<<i+1<<" :";
        cin>>flight_num[i];
        cout<<"Enter destination for flight "<<flight_num[i]<<" :";
        cin>>desti[i];
        cout<<" Enter seats available for flight "<<flight_num[i]<<" :";
        cin>>seat_num[i];
    }cout<<"\nFlight Information : "<<endl;
    cout<<"---------------------\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<" Flight "<<flight_num[i]<<" to "<<desti[i]<<" has "<<seat_num[i]<<" seats available."<<endl;

    }cout<<"\n Flights with less than 5 seats available: "<<endl;
    cout<<" ------------------------------------"<<endl;
    bool found=false;
    for(int i=0;i<n;i++){
        if(seat_num[i]<5){
            cout<<"Flight "<<flight_num[i]<<" to "<<desti[i]<<" has only "<<seat_num[i]<<" seats left!"<<endl;
            found=true; 
        }
    }if(!found){
        cout<<" No flights with less than 5 seats available."<<endl;
    }
}