#include<iostream>
using namespace std;
int cal_sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }return sum;
}
main(){
    int n;
    cout<<"Enter number of elements : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER "<<n<<" numbers : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<" Sum of all elements : "<<cal_sum(arr,n)<<endl;
    
}