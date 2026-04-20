#include<iostream>
#include <cmath>
#include <string>
using namespace std;
string projectTimeCal(int needHours, int day, int worker) {
    double effectiveDays = day * 0.9;
    double hoursPerDayPerWorker = 10;
    double totalHours = effectiveDays*hoursPerDayPerWorker *worker;
    int availableHours = floor(totalHours);
    if (availableHours >= needHours) {
        int hoursLeft = availableHours - needHours;
        return "Yes! " + to_string(hoursLeft) + " hours left.";
    } else {
        int hoursNeeded = needHours - availableHours;
        return "Not enough time! " + to_string(hoursNeeded) + " hours needed.";
    }
}
int main() {
    int needHours, day, worker;
    cout << "Enter needed hours: ";
    cin >> needHours;
    cout << "Enter number of days: ";
    cin >> day;
    cout << "Enter number of workers: ";
    cin >> worker;
    cout << projectTimeCal(needHours, day, worker) << endl;

    return 0;
}