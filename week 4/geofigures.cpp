#include <iostream>
using namespace std;
main(){
  string geo_fig ;
  cout <<"     ";
  cin>> geo_fig ;
  if ( geo_fig == "square" ){
    float length;
    cout<<"  ";
    cin>> length;
    float area = length * length;
    cout<<area;
  } if ( geo_fig == "rectangle"){
    float length , width;
    cout<<"  ";
    cin>> length  ;
    cout<<"   ";
    cin>> width ;
    float area = length * width;
    cout << area;
  } if ( geo_fig == "circle"){
    float radius ;
    cout<<"   ";
    cin>> radius ;
    float pi = 3.14;
    float area = pi * radius * radius ;
    cout<< area;
  } if ( geo_fig == "triangle" ){
    float base , height;
    cout<< "   ";
    cin >> base;
    cout<< "   ";
    cin>> height;
    float area = 0.5 * base * height;
    cout<< area;
  } 
}