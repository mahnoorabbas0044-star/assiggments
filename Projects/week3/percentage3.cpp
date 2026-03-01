#include <iostream>
using namespace std;
main(){
cout<<" enter the student name: ";
string name;
cin>> name;
cout<<"enter matriculation marks: ";
float matric_marks;
cin>> matric_marks;
cout<<" enter intermediate marks: ";
float inter_marks;
cin>> inter_marks;
cout<<" enter ecat marks: ";
float ecat_marks;
cin>> ecat_marks;
float aggregate;
aggregate = (float) ecat_marks / 400 * 50 + (float) inter_marks / 505 * 40 + (float) matric_marks / 1100 * 10 ;
cout<<" aggregate score for " << name << "is"<< aggregate <<" % "<< endl;
   }