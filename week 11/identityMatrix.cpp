#include <iostream>
using namespace std;
bool identMatrix(int matrix[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i== j && matrix[i][j] != 1){
                return false;
            }
            else if( i!= j && matrix [i][j] != 0){
                return false;
            }
        }
    }
    return true;
}
void printMatrix(int matrix[3][3]){
    cout<<"The matrix you entered is : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int matrix[3][3];
    cout<<"Enter elements of the matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter elements at position [ "<<i<<" ][ "<<j<<" ] "<<endl;
            cin>>matrix[i][j];
        }
    }
    printMatrix(matrix);
    if(identMatrix(matrix)){
        cout<<"Entered matrix is identity matrix"<<endl;
    }else{
        cout<<"Entered matrix is not identity matrix"<<endl;
    }
    return 0;
}