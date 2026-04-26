#include<iostream>
using namespace std;
const int cols = 5;
void swapCol(int M[][cols],int rows ,int col1, int col2){
    for(int i=0;i<rows;i++){
        int temp = M[i][col1];
        M[i][col1] = M[i][col2];
        M[i][col2]= temp;
    }
}
void largestcolFirst(int M[][cols] , int rows){
    int maxSum = -1 , maxCol=0;
    for(int j=0; j<cols ; j++){
        int sum = 0;
        for(int i=0; i<rows ; i++){
            sum+= M[i][j];
        }
        if (sum > maxSum){
            maxSum = sum;
            maxCol = j;
        }
    }
    if(maxCol != 0){
        swapCol(M , rows,0,maxCol);
    }
}
void PrintMatrix(int M[][cols],int rows){
    for(int i=0; i<rows; i++){
        for(int j=0 ; j<cols ;j++){
            cout<<M[i][j]<< " ";
        }
        cout<<endl;
    }
}
int main(){
 int rows;
    cout<<"Enter row size : "<<endl;
    cin>>rows;
    int M[rows][cols];
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"Enter element at position [ "<<i<<" ][ "<<j<<" ]"<<endl;
            cin>>M[i][j];
        }
    }
    cout<<"Original Matrix : "<<endl;
    PrintMatrix(M,rows);
    largestcolFirst(M, rows);
    cout<<"Matrix after largest column moved to the first"<<endl;
    PrintMatrix(M,rows);
    return 0;
}