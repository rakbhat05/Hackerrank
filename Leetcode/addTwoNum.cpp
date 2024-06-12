#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class as provided
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }

        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};

// Helper function to create a linked list from a vector of integers
ListNode* createLinkedList(const vector<int>& digits) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int digit : digits) {
        ListNode* newNode = new ListNode(digit);
        if (!head) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    return head;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create two linked lists representing the numbers 342 and 465
    vector<int> digits1 = {2, 4, 3}; // Represents the number 342
    vector<int> digits2 = {5, 6, 4}; // Represents the number 465

    ListNode* l1 = createLinkedList(digits1);
    ListNode* l2 = createLinkedList(digits2);

    // Solution instance
    Solution solution;

    // Add the two numbers
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print the result
    cout << "Result: ";
    printLinkedList(result);

    // Clean up memory
    ListNode* temp;
    while (l1 != nullptr) {
        temp = l1;
        l1 = l1->next;
        delete temp;
    }
    while (l2 != nullptr) {
        temp = l2;
        l2 = l2->next;
        delete temp;
    }
    while (result != nullptr) {
        temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}
