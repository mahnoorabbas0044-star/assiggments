#include<iostream>
#include<string>
using namespace std;
void jazzify(string chords[],int size){
    for(int i=0;i<size;i++){
        if (chords[i].empty()||chords[i].back()=='7'){
            continue;}else{
                chords[i]+="7";
            }

    }

    }main(){
        int size;
        cout<<" ENTER THE  NUMBER OF CHORDS : "<<endl;
        cin>>size;
        string chords[size];
        cout<<" ENTER "<<size<<" CHORDS < ONE PER LINE : "<<endl;
        for(int i=0;i<size;i++){
            cin>> chords[i];
        }jazzify(chords,size);
        cout<<" JAZZIFIED CHORDS : [ ";
        for(int i=0;i<size;i++){
            cout<<chords[i];
            if(i != size-1)cout<<" , ";
        }cout<<" ]"<<endl;
    }
