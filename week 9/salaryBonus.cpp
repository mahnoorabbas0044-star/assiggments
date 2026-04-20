#include<iostream>
#include <iomanip> 
using namespace std;
float calSalary(float base, int score, int experience) {
    float bonusPer;
    if (score >= 90) {
        bonusPer = 20;
    } else if (score >= 75) {
        bonusPer = 10;
    } else {
        bonusPer = 5;
    }
    if (experience >= 5) {
        bonusPer += 5;
    }
    float finalSalary = base + (base * bonusPer / 100.0);
    return finalSalary;
}

int main() {
    float base;
    int score; int experience ;
    cout << "Enter base salary: "<<endl;
    cin >> base;
    cout << "Enter performance score: ";
    cin >> score;
    cout << "Enter years of experience: ";
    cin >> experience;
    cout << fixed << setprecision(2);
    cout << "Final Salary: " << calSalary(base, score, experience) << endl;
    return 0;
}
