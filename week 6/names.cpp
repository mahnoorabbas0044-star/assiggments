#include<iostream>
#include<string>
using namespace std;
int main(){
    int size=5;
    string stu[size];
    cout<<"Enter names of 5 students : "<<endl;
    for(int i=0;i<size;i++){
        cin>>stu[i];
    }
    cout<<" Student names are :  "<<endl;
    for(int i=0;i<size;i++){
        cout<<stu[i]<<endl;
    }}
