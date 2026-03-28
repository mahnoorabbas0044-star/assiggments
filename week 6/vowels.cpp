#include<iostream>
#include<string>
using namespace std;
main(){
    string input,result=" ";
    cout<<"Enter a string "<<endl;
    getline(cin,input);
    for(char c:input){
        if( c!='a'&& c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U'){
          result+=c;
        }
    

    }cout<<"STRING WITH VOWELS REMOVED IS : "<<result<<endl;
}