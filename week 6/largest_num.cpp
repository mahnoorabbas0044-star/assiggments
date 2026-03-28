#include<iostream>
using namespace std;
int largestnum(int arr[],int size){
    int largest=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }return largest;
}main(){
    int n;
    cout<<" Enter the Number of Elements:";
    cin>>n;
    int arr[n];
    cout<<" Enter "<<n<<" numbers , one per line : "<<endl;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }cout<<" The Largest Number Entered is : "<<largestnum(arr,n)<<endl;
}