#include<iostream>
using namespace std;
int tot_even(int arr[],int n){
    int tot=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            tot++;
        }
    }return tot;
}main(){
    int n;
    cout<<"Enter number of elements : "<<endl;
    cin>>n;
    int arr[n];
    cout<<" Enter "<<n<<" numbers : "<<endl;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }cout<<" TOTAL EVEN NUMBERS : "<<tot_even(arr,n)<<endl;
}