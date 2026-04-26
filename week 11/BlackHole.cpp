#include<iostream>
using namespace std;
const int rows=5;
const int cols = 5;
char objects[5][5]=
{
    {'-','#','#','-','#'},
    {'#','-','-','#','-'},
    {'-','#','-','-','-'},
    {'#','-','#','-','#'},
    {'#','-','-','-','-'}
    };
bool gravity = false;
bool isBlackHole = true;
void displayWorld(){
    cout<<"Current World "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<objects[i][j]<<" ";
        }cout<<endl;
    }
}
void GravityStatus(bool status){
    gravity = status;
}
void timeTick(int ticks){
    for(int t=0;t<ticks;t++){
        for(int i=rows -1;i>=0;i--){
        for(int j=0;j<cols;j++){
            if(objects[i][j] == '*'){
                int nextRow = i+1;
                if(nextRow == rows){
                    if(isBlackHole){
                        if(objects[0][j] == '-'){
                            objects[0][j]='*';
                            objects[i][j]='-';
                        }
                    }else{ 

                    }
                }else{
                    if(objects[nextRow][j] == '-'){
                        objects[nextRow][j]='*';
                        objects[i][j]='-';
                    }
                }
            }
        }
    }
}
}
main(){
    cout<<"Initially :"<<endl;
    displayWorld();
    GravityStatus(true);
    cout<<"After 1 tick "<<endl;
    timeTick(1);
    displayWorld();
    cout<<"After 2 ticks"<<endl;
    timeTick(2);
    displayWorld();

    return 0;
}    
