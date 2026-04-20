#include <iostream>
#include <iomanip>  
using namespace std;
float taxCal(char type, float price) {
    float taxper;
    switch(type) {
        case 'M': taxper = 6;  break;  
        case 'E': taxper = 8;  break;  
        case 'S': taxper = 10; break;   
        case 'V': taxper = 12; break;   
        case 'T': taxper = 15; break;   
        default:
            cout << "Invalid vehicle type code!" << endl;
            return -1; 
    }
    float taxAmount = price * (taxper / 100.0);
    float finalPrice = price + taxAmount;
    cout << fixed << setprecision(2);
    cout << "The final price on a vehicle of type " << type
         << " after adding the tax is $" << finalPrice << endl;
    return finalPrice;
}
int main() {
    char vehicleType;
    float price;
    cout << "Enter vehicle type code (M/E/S/V/T): ";
    cin >> vehicleType;
    cout << "Enter vehicle price: $";
    cin >> price;
    taxCal(vehicleType, price);
    return 0;
}