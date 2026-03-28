#include<iostream>
using namespace std;
void insert_array(int first[],int size_1,int second[],int size_2,int result[]){
    result[0]=first[0];
    for(int i=0;i<size_2;i++){
        result[i+1]=second[i];
    }result[size_2+1]=first[1];
}main(){
    int size_1=2;
    int first[size_1];
    cout<<" Enter 2 elements for the first array, one per line : "<<endl;
    for(int i=0;i<size_1;i++){
        cin>> first[i];
    }int size_2;
    cout<<" Enter the number of rlements for the second array:  "<<endl;
    cin>> size_2;
    int second[size_2];
    cout<<" Enter "<< size_2<<" elements for the second array, one per line : "<<endl;
    for(int i=0;i<size_2;i++){
    cin>> second[i];}
    int result[size_1+size_2];
    insert_array(first,size_1,second,size_2,result);
    cout<<" RESULTING ARRAY : [";
    for (int i=0;i<size_1+size_2;i++){
        cout<<result[i];
        if(i!= size_1+size_2-1) cout<<" , ";
    }cout<<" ]"<<endl;
}