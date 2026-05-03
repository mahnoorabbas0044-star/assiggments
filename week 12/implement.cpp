#include<iostream>
using namespace std;
void reverseArray(int *arr, int size){
    int *start = arr;
    int *end = arr+ size-1;
    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;

    }
}
void displayArray(int *arr, int size){
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int n;
    cout<<"Enter number of elements : "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n; i++){
        cin>> arr[i];
    }
    cout<<"Original Array: ";
    displayArray(arr,n);
    reverseArray(arr,n);
    cout<<"Reversed Array: ";
    displayArray(arr,n);
    delete[] arr;
    return 0;
}