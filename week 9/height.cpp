#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float distance;
    cout<<"Give distance from  tree : "<<endl;
    cin>>distance;
    float angle = angle * 57.2958;
    cout<<"Give angle of elevation "<<endl;
    cin>>angle;
    float height = distance * tan(angle);
    cout<<" The height of tree is :"<<height<<endl;
    return 0;

}