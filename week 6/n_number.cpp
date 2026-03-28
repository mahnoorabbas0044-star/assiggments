#include<iostream>
using namespace std;
main(){
    int n;
    cout<<" How many numbers you want to enter : "<<endl;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
      cout<<" Enter "<< i+1 <<" number : "<<endl;
      cin>> arr[i];
    }cout<<" The numbers you entered are : ";
    for(int i = 0;i<n ; i++){
        cout<< arr[i]<< "  ";
    }
}