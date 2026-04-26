#include <iostream>
using namespace std;
void PrintSum(int matrix[][3],int rowSize){
    int sum =0;
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<3;j++){
            sum += matrix[i][j];
        }
    }
    cout<<"The sum of elements in the matrix is : "<<sum<<endl;

}
int main(){
    int rowSize;
    cout<<"Enter row size : ";
    cin>>rowSize;
    int matrix[rowSize][3];
    cout<<"Enter elements of the matrix "<<endl;
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element at position [ "<<i<<" ][ "<<j<<"]: ";
            cin>> matrix[i][j];
        }
    }PrintSum(matrix, rowSize);
    return 0;
}