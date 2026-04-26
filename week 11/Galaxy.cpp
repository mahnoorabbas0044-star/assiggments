#include<iostream>
using namespace std;
const int size =5;
char objects[size][size] ={
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'#', '#', '-', '-', '#'},
    {'#', '-', '-', '-', '-'},
    {'#', '-', '-', '-', '-'}
};
bool Gravity = false;
void DispWorld(){
    cout<<"Current World State"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<objects[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void GravityStatus(bool status){
    Gravity = status;
    cout<<"Gravity set to"<<(Gravity? "ON" : "OFF")<<endl;

}
void applyGravity(){
    for(int row=size-2; row>=0; row--){
        for(int col=0;col<size;col++){
            if(objects[row][col] == '#'&& objects[row+1][col] =='-'){
                objects[row+1][col]='#';
                objects[row][col]= '-';
            }
        }
    }
}
void timeTick(int time){
    if (!Gravity){
        cout<<"Gravity is off. No changes applied."<<endl;
        return;
    }
    for(int t=0; t<time;t++){
        applyGravity();
    }cout<<time<<"tick(s) applied."<<endl;
}
int main(){
    DispWorld();
    GravityStatus(true);
    timeTick(3);
    DispWorld();
    return 0;
}