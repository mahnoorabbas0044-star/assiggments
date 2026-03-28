#include<iostream>
#include <string>
using namespace std;
main(){
    int n;
    cout<<"Enter number of customers:  "<<endl;
    cin>>n;
    string cust[n];
    cout<<"Enter the names of "<<n<<" customers :  "<<endl;
    for(int i=0;i<n;i++){
        cin>>cust[i];
    }char letter;
    cout<<"Enter a letter to check : ";
    cin>>letter;
    int count=0;
    for(int i=0;i<n;i++){
        if (!cust[i].empty() && cust[i][0]==letter){
            count++;
        }
    }cout<<"Total names starting with '"<<letter<<"': "<<count;
}