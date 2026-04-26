#include<iostream>
#include<string>
using namespace std;
const int rows=7;
const int cols=16;
bool scored(char field[rows][cols]){
    int crossbarRow= -1;
    for(int r=0;r<rows;r++){
        bool crossbar = true;
        for(int c=0;c<cols;c++){
            if(field[r][c] != '#'){
                crossbar = false;
                break;
                }
            }
            if (crossbar){
                crossbarRow = r;
                break;
            }
        }
        for(int r=0;r<rows;r++){
            for (int c=0; c<cols; c++){
                if(field[r][c] == '0'){
                    if(crossbarRow != -1 && r<crossbarRow){
                        if (c>0 && c<cols-1){
                            return true;
                        }
                    }
                }
            }
        }return false;
    }
void printField(char field[rows][cols]){
    for(int r=0;r<rows; r++){
        for (int c=0; c<cols; c++){
            cout<< field[r][c];
        }cout<<endl;
    }
}
int main(){
    char field1[rows][cols] = {
        {'#',' ','0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'}
    };
    cout<<"FootBall Field Simulation"<<endl;
    printField(field1);
    cout<<"Goal Scored :"<<(scored(field1)? "True" : "False")<<endl;
    char field2[rows][cols] = {
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {'#',' ','0',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'}
    };
    cout<<"Football field Simulation"<<endl;
    printField(field2);
    cout<<"Goal Scored :"<<(scored(field2)? "True" : "False")<<endl;
    return 0;
}