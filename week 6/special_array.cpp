#include<iostream>
using namespace std;
bool Special_array(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i%2 ==0){
            if(arr[i]%2!=0){return false;}
            
        }else{
            if(arr[i]%2 ==0){return false;}
        }
    }return true;
}main(){
    int size;
    cout<<" Enter the size of the array : "<<endl;
    cin>>size;
    int arr[size];
    cout<<" Enter "<<size<< " elements of the array : "<<endl;
    for(int i=0;i<size;i++){
        cin>> arr[i];
    }if (Special_array(arr,size)){
        cout<<" The ARRAY is SPECIAL "<<endl;
    }else{cout<<"The ARRAY is not SPECIAL"<<endl;}
}