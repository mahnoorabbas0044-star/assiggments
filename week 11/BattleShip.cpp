#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
char board[SIZE][SIZE]={
    {'.','.','.','*','*'},
    {'.','.','.','.','.'},
    {'.','*','.','.','.'},
    {'.','.','.','.','.'},
    {'.','.','*','*','.'}
};
pair<int,int> getCoordinates(string coord){
    int row = coord[0] - 'A';
    int col = coord[1] - '1';
    return {row,col};
}
string fire(string coord){
    pair<int,int> pos = getCoordinates(coord);
    int row= pos.first;
    int col = pos.second;
    if(board [row][col] == '.')
    return "splash";
    else 
    return "BOOM";
}
int main(){
    string coord;
    cout<<"Enter coordinates to fire torpedo ( e.g. , A1, B3, E5) : ";
    cin>>coord;
    cout<<"Result : "<<fire(coord)<<endl;
    return 0;
}