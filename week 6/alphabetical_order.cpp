#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
main(){
    int n;
    cout<<"Enter number of students : "<<endl;
    cin>>n;
    string stu[n];
    cout<<"Enter names of "<<n<<"students : "<<endl;
    for(int i=0;i<n;i++){
        cin>>stu[i];
    }sort(stu,stu+n);
    cout<<"Students in alphabetical order : "<<endl;
    for(int i=0;i<n;i++){
        cout<<stu[i]<<endl;
    }
}