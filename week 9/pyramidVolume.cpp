#include <iostream>
#include <string>
#include <iomanip>  
using namespace std;
double VolMeters(double length, double width, double height) {
    return (length*width*height) / 3.0;
}
double convertVol(double volMeters, string unit) {
    if (unit == "millimeters") {
        return volMeters * 1e9; 
    }
    else if (unit == "centimeters") {
        return volMeters * 1e6; 
    }
    else if (unit == "meters") {
        return volMeters;   
    }
    else if (unit == "kilometers") {
        return volMeters / 1e9;  
    }
    else {
        cout << "Invalid unit entered!" << endl;
        return -1; 
    }
}

int main() {
    double len, wid, hgt;
    string unit;

    cout << "Enter length, ";
    cin >> len;
    cout << "width, ";
    cin >> wid;
    cout << "height (in meters): ";
    cin >> hgt;

    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    double volMeters = VolMeters(len, wid, hgt);
    double convertedVolume = convertVol(volMeters, unit);

    if (convertedVolume != -1) {
        cout << fixed << setprecision(3);
        cout << convertedVolume << " cubic " << unit << endl;
    }
    return 0;
}