//Decision Making - Time Sheet
#include <iostream>
using namespace std;

int main() {
    int sun, mon, tue, wed, thu, fri, sat;

    // Read input hours for each day
    cin >> sun >> mon >> tue >> wed >> thu >> fri >> sat;

    int rate1 = sun * 150;
    int rate7 = sat * 125;
    int rate2, rate3, rate4, rate5, rate6, bonus, bonusRate;

    if (mon <= 8) {
        rate2 = mon * 100;
    } else {
        bonus = mon - 8;
        bonusRate = bonus * 115;
        rate2 = bonusRate + 800;
    }

    if (tue <= 8) {
        rate3 = tue * 100;
    } else {
        bonus = tue - 8;
        bonusRate = bonus * 115;
        rate3 = bonusRate + 800;
    }

    if (wed <= 8) {
        rate4 = wed * 100;
    } else {
        bonus = wed - 8;
        bonusRate = bonus * 115;
        rate4 = bonusRate + 800;
    }

    if (thu <= 8) {
        rate5 = thu * 100;
    } else {
        bonus = thu - 8;
        bonusRate = bonus * 115;
        rate5 = bonusRate + 800;
    }

    if (fri <= 8) {
        rate6 = fri * 100;
    } else {
        bonus = fri - 8;
        bonusRate = bonus * 115;
        rate6 = bonusRate + 800;
    }

    int totalRate = rate1 + rate2 + rate3 + rate4 + rate5 + rate6 + rate7;
    cout << totalRate << endl;

    return 0;
}
