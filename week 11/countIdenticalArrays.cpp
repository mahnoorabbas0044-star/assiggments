#include<iostream>
using namespace std;
const int col =3;
bool Identical(int row1[],int row2[]){
    for(int j=0;j<col;j++){
        if(row1[j] != row2[j])
        return false;
    }return true;
}
int countident(int M[][col],int rows){

    int count =0;
    bool visit[100] = {false};
    for(int i=0;i<rows;i++){
        if(visit[i])continue;
        int frequency = 1;
        for(int j=i+1; j<rows; j++){
            if(Identical(M[i],M[j])){
                frequency++;
                visit[j] = true;
            }
        }
            if (frequency>1){
                count+= frequency;
            }
        }
    
    return count;
}
int main(){
    int rows;
    cout<<"Enter number of rows : "<<endl;
    cin>>rows;
    int M[100][col];
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter element at position [ "<<i<<" ][ "<<j<<" ]"<<endl;
            cin>>M[i][j];
        }
    }
    int result = countident(M,rows);
    cout<<"Total Identical rows : "<< result <<endl;
    return 0;
}