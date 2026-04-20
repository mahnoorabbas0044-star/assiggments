#include <iostream>
#include <cmath>  
using namespace std;
void solveQuadratic(double a, double b, double c) {
    double discriminant = b*b - 4*a*c<<endl;
    if (discriminant > 0) {
        double root01 = (-b + sqrt(discriminant)) / (2*a);
        double root02 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Solutions : x = " ;
        cout << root01 << " and x = "<< root02 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2*a);
        cout << "Solution : x = " ;
        cout << root << endl;
    }
    else {
        double real = -b / (2*a);
        double imaginary = sqrt(-discriminant) / (2*a);
        cout << "Complex Solutions : x= " ;
        cout << real << " + " << imaginary << " i and x= " ;
        cout << real << " - " << imaginary << " i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    if (a == 0) {
        cout << "    " << endl;
    } else {
        solveQuadratic(a, b, c);
    }

    return 0;
}
    
