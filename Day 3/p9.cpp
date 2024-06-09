//Decision Making - Cricket
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int totalBalls, totalRuns, scoredRuns, ballsBowled;
    
    // Read inputs
    cin >> totalBalls >> totalRuns >> scoredRuns >> ballsBowled;

    // Calculate total overs
    int totalOvers = totalBalls / 6;
    int remainingBallsTotal = totalBalls % 6;
    float totalOversFraction = totalOvers + (remainingBallsTotal / 10.0);

    // Calculate overs finished
    int finishedOvers = ballsBowled / 6;
    int remainingBallsFinished = ballsBowled % 6;
    float finishedOversFraction = finishedOvers + (remainingBallsFinished / 10.0);

    // Calculate run rates
    float currentRunRate = (float)scoredRuns / finishedOversFraction;
    float requiredRunRate = (float)totalRuns / totalOversFraction;

    // Determine eligibility
    string eligibility = (currentRunRate >= requiredRunRate) ? "Eligible to Win" : "Not Eligible to Win";

    // Print results
    cout << fixed << setprecision(0) << totalOvers << endl;
    cout << fixed << setprecision(1) << finishedOversFraction << endl;
    cout << fixed << setprecision(1) << currentRunRate << endl;
    cout << fixed << setprecision(1) << requiredRunRate << endl;
    cout << eligibility << endl;

    return 0;
}
