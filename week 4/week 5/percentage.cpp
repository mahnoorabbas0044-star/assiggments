#include<iostream>
using namespace std;
main(){
    int n , num;
    float a1=0,a2=0,a3=0,a4=0,a5=0;
    cout<< " Enter total count :  ";
    cin>> n;
    for(int i = 0; i< n;i++){
        cin>> num;
        if(num<200)a1++;
        else if (num< 400)a2++;
        else if (num< 600)a3++;
        else if (num< 800)a4++;
        else if (a5++);
    }cout<< (a1/n)* 100<< " % "<<endl;
    cout<< (a2/n)* 100<< " % "<<endl;
    cout<< (a3/n)* 100<< " % "<<endl;
    cout<< (a4/n)* 100<< " % "<<endl;
    cout<< (a5/n)* 100<< " % "<<endl;
}
