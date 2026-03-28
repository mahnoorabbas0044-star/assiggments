#include<iostream>
using namespace std;
bool isalreadyEntered(int arr[],int size, int num){
for(int i=0;i<size;i++){
    if(arr[i]==num){
        return true;
    }
}return false;

}main(){
    int n;
    cout<<" Enter the number of elements : ";
    cin>>n;
    int arr[100];
    int count = 0;
    cout<<" Enter "<<n<<" numbers one per line: "<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if (isalreadyEntered(arr,count,num)){
            cout<< " Already Entered: "<<num<<endl;
        }else{
            arr[count]=num;
            count++;
        }
    }cout<<" Unique numbers Entered : ";
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
