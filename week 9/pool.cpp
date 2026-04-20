#include <iostream>
using namespace std;
void calPoolState(int V, int P1, int P2, float H) {

    float totWater = (P1 + P2) * H;

    if (totWater <= V) {

        int poolPercent = (totWater * 100) / V;
        int p1Percent = (P1 * H * 100) / totWater;
        int p2Percent = (P2 * H * 100) / totWater;

        cout << "The pool is " << poolPercent << "% full. ";
        cout << "Pipe 1: " << p1Percent << "%. ";
        cout << "Pipe 2: " << p2Percent << "%.";
    }
    else {
        float overflow = totWater - V;
        cout << "For " << H << " hours the pool overflows by ";
        cout << overflow << " liters.";
    }
}

int main() {
    int V, P1, P2;
    float H;
    cin >> V >> P1 >> P2 >> H;
    calPoolState(V, P1, P2, H);
    return 0;
}