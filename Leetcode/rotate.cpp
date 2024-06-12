#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    int length(ListNode* head) {
        ListNode* curr = head;
        int count = 0;
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }
        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) return head;
        
        int size = length(head);
        k = k % size;

        ListNode* lastNode = head;
        ListNode* newHead = nullptr;
        int index = 1;

        while (lastNode != nullptr) {
            if (size - k == index) {
                newHead = lastNode->next;
                lastNode->next = nullptr;
                break;
            } 
            index++;
            lastNode = lastNode->next;
        }

        if (newHead != nullptr) {
            ListNode* join = newHead;
            while (join->next != nullptr) {
                join = join->next;
            }
            join->next = head;  
            return newHead;
        }

        return head;
    }
};

// Helper function to create a linked list from an array of integers
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list representing the numbers 1, 2, 3, 4, 5
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    ListNode* head = createLinkedList(arr, n);

    // Solution instance
    Solution solution;

    // Rotate the list to the right by 2 places
    int k = 2;
    ListNode* rotatedHead = solution.rotateRight(head, k);

    // Print the rotated list
    cout << "Rotated List: ";
    printLinkedList(rotatedHead);

    // Clean up memory
    ListNode* temp;
    while (rotatedHead != nullptr) {
        temp = rotatedHead;
        rotatedHead = rotatedHead->next;
        delete temp;
    }

    return 0;
}
