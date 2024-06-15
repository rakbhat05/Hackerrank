//Arrays 1D - Remove duplicate elements
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_set<int> seen;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (seen.find(a[i]) == seen.end()) {  // If the element is not in the set
            seen.insert(a[i]);  // Add the element to the set
            result.push_back(a[i]);  // Add the element to the result vector
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
       cout<<endl;
    }
    cout << endl;

    return 0;
}
