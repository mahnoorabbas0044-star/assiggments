#include <iostream>
using namespace std;
void disp_position(char word[],int length){
    for(int i = 0;i< length;i++){
        cout<<word[i]<<" found at position"<< i << endl;
    }
}
main(){
    char word[100];
    cout<<" Enter a word : ";
    cin>> word;
    int length = 0;
    while (word[length]!= '\0')
    {length++;}
    disp_position(word , length);
    return 0;

}