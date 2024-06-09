//Decision Making - Online shopping
#include <iostream>
using namespace std;

int main() {
    // Input for Flipkart
    int fp, fd, fs;
    cin >> fp >> fd >> fs;

    // Input for Snapdeal
    int sp, sd, ss;
    cin >> sp >> sd >> ss;

    // Input for Amazon
    int ap, ad, as;
    cin >> ap >> ad >> as;

    // Calculate effective prices
    int ft = static_cast<int>(fp - (fp * (fd * 0.01))) + fs;
    cout << "In Flipkart: Rs." << ft << endl;

    int st = static_cast<int>(sp - (sp * (sd * 0.01))) + ss;
    cout << "In Snapdeal: Rs." << st << endl;

    int at = static_cast<int>(ap - (ap * (ad * 0.01))) + as;
    cout << "In Amazon: Rs." << at << endl;

    // Determine the cheapest option with priority rules
    if (ft < st && ft < at) {
        cout << "Choose Flipkart" << endl;
    } else if (st < ft && st < at) {
        cout << "Choose Snapdeal" << endl;
    } else if (at < ft && at < st) {
        cout << "Choose Amazon" << endl;
    } else {
        // Check for tie and apply priority
        if (ft == st && ft == at) {
            cout << "Choose Flipkart" << endl;
        } else if (ft == st) {
            cout << "Choose Flipkart" << endl;
        } else if (ft == at) {
            cout << "Choose Flipkart" << endl;
        } else if (st == at) {
            cout << "Choose Snapdeal" << endl;
        }
    }

    return 0;
}