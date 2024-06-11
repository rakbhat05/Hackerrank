#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        long copy = x; // Make a copy of the input integer

        // A negative number cannot be a palindrome
        if (x < 0) {
            return false;
        }

        // Reverse the integer
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        // Check if the reversed number is equal to the original number
        return copy == rev;
    }
};

int main() {
    Solution solution;
    int x;
    cout << "Enter an integer to check if it's a palindrome: ";
    cin >> x;

    bool result = solution.isPalindrome(x);
    if (result) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}