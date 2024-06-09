//Decision Making - Mango tree
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int rows, columns, treeNumber;
    
    // Read input values
    cin >> rows >> columns >> treeNumber;

    // Calculate the conditions for being a mango tree
    bool isMangoTree = false;

    // Check if the tree is in the first row
    if (treeNumber >= 1 && treeNumber <= columns) {
        isMangoTree = true;
    }
    // Check if the tree is in the first column
    else if (treeNumber % columns == 1) {
        isMangoTree = true;
    }
    // Check if the tree is in the last column
    else if (treeNumber % columns == 0) {
        isMangoTree = true;
    }

    // Output the result
    if (isMangoTree) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
