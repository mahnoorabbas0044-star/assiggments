#include<iostream>
#include<cstring>
using namespace std;
void reverseword(char word[]){
    int length = strlen(word);
    cout<<" Revesed String : ";
    for(int i = length-1;i>=0;i--)
    {
        cout<<word[i];
    }
}
main(){
    char word[100];
    cout<<" Enter a word : "<<endl;
    cin >> word;
    reverseword(word);
    return 0;
}