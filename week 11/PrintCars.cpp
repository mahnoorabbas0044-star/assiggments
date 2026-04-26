#include <iostream>
using namespace std;
const int rowSize = 5;
const int colSize = 5;
void printTotBlue(int cars[][colSize],int rows){
    cout<<"Toyota Blue Cars : "<< cars[0][0]<<endl;
}
int countRedCars(int cars[][colSize],int rows){
    int tot=0;
    for(int i=0;i<rows;i++){
        tot+=cars[i][1];
    }return tot;
}
int countNissanCars(int cars[][colSize], int rows){
    int tot=0;
    for(int i=0;i<rows;i++){
        tot+= cars[i][2];
    }return tot;
}
int convert(int cars[][colSize],int rows, int colourCol){
    int tot=0;
    for(int i=0;i<rows;i++){
        tot+= cars[i][colourCol];
    }return tot;
}
void printTrans(int cars[][colSize], int rows){
    cout<<"Transpose of matrix : "<<endl;
    for(int col=0;col<colSize;col++){
        for( int row = 0;row<rows; row++){
            cout<<cars[row][col]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int cars[rowSize][colSize]={
        {10,7,12,10,4},
        {18,11,15,17,2},
        {23,19,12,16,14},
        {7,12,16,0,2},
        {3,5,6,2,1}
    };
    printTotBlue(cars,rowSize);
    cout<<"Total Red Cars : "<<countRedCars(cars, rowSize)<<endl;
    cout<<"Total Nissan Cars : "<<countNissanCars(cars , rowSize)<<endl;
    cout<<"Total cars of color (column 3) : "<< convert(cars,rowSize,3)<<endl;
    printTrans(cars, rowSize);
    return 0;
}