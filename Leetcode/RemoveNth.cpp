#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode(0, head);
        ListNode* dummy = res;

        for (int i = 0; i < n; i++) {
            head = head->next;
        }

        while (head != nullptr) {
            head = head->next;
            dummy = dummy->next;
        }

        dummy->next = dummy->next->next;

        ListNode* result = res->next;
        delete res; // clean up the dummy node
        return result;        
    }
};

ListNode* createLinkedList(const vector<int>& values) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int val : values) {
        ListNode* newNode = new ListNode(val);
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
    // Create a linked list representing the numbers 1, 2, 3, 4, 5
    vector<int> list_values = {1, 2, 3, 4, 5};

    ListNode* head = createLinkedList(list_values);

    // Solution instance
    Solution solution;

    // Remove the 2nd node from the end
    int n = 2;
    ListNode* result = solution.removeNthFromEnd(head, n);

    // Print the result
    cout << "Result: ";
    printLinkedList(result);

    // Clean up memory
    ListNode* temp;
    while (result != nullptr) {
        temp = result;
        result = result->next;
        delete temp;
    }

    return 0;
}
