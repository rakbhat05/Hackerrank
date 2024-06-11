//Decision Making - Scholarship
#include <iostream>
using namespace std;

int main() {
    int age, year, income, arrears;
    float score, attendance;

    // Read input values
    cin >> age >> year >> income >> arrears >> score >> attendance;

    // Check primary eligibility criteria
    bool basicCriteria = (age >= 18 && age < 21) && (year >= 2021) && (score >= 60) && (attendance >= 80);

    if (basicCriteria) {
        if (income <= 200000) {
            // Full scholarship eligibility
            if (arrears <= 2) {
                cout << "Eligible" << endl;
            } else if (arrears > 2 && score >= 80 && attendance >= 90) {
                cout << "Eligible" << endl;
            } else {
                cout << "Not Eligible" << endl;
            }
        } else if (income > 200000 && income < 250000) {
            // Partial scholarship eligibility
            if (arrears <= 2) {
                cout << "Partially Eligible" << endl;
            } else if (arrears > 2 && score >= 80 && attendance >= 90) {
                cout << "Partially Eligible" << endl;
            } else {
                cout << "Not Eligible" << endl;
            }
        } else {
            cout << "Not Eligible" << endl;
        }
    } else {
        cout << "Not Eligible" << endl;
    }

    return 0;
}
