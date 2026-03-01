#include <iostream>
using namespace std;
main()  {
int num,a,b,c,d,sum;
cout<< " enter a 4-didit number: " ;
cin>> num;
a = num%10 , num/=10;
b = num%10 , num/=10;
c = num%10 , num/=10;
d = num%10 , num/=10;
sum = a+b+c+d ;
cout<< " sum of individual digits : " << sum << endl;
   }