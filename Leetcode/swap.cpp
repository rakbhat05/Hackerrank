#include <iostream>
#include <vector>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // Create a dummy node
        ListNode *temp = new ListNode(0); // dummy node
        temp->next = head;

        ListNode *ptr = temp, *swap1, *swap2; // pointers 

        while (ptr->next && ptr->next->next) {  // At least 2 nodes should be present for swapping
            swap1 = ptr->next; // node1 
            swap2 = ptr->next->next; // node2

            swap1->next = swap2->next; // swapping nodes link just like variables
            swap2->next = swap1;

            ptr->next = swap2; // updation of ptr's next  
            ptr = swap1;  // updation of ptr
        }

        ListNode* result = temp->next;
        delete temp; // clean up the dummy node
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
    // Create a linked list representing the numbers 1, 2, 3, 4
    vector<int> digits = {1, 2, 3, 4};

    ListNode* head = createLinkedList(digits);

    // Solution instance
    Solution solution;

    // Swap nodes in pairs
    ListNode* result = solution.swapPairs(head);

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
