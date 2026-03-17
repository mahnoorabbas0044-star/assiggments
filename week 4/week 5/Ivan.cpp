#include<iostream>
using namespace std;
main(){
    cout<<"Enter money:";
    int N;
    cin>>N;
    cout<<"Enter year:";
    int year;
    cin>>year;
    int age;
    double spend=0;
    for( int i =1800;i<=year;i++)
 {
    if( i%2==0)
    {
        spend=spend+12000;
    }
    else{
        age=18+(i-1800);
        spend=spend+12000+(50*age);
    }
}
    if(N>=spend)
{
    cout<<"Yes!! He will live a carefree life and will have "<<endl;
    cout<<N-spend << " dollars left "<<endl;
}
else{
    cout<<"He will need "<<spend-N << " dollars to survive"<<endl;
}

}