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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr)
            return list2;
        if(list2 == nullptr)
            return list1;
        
        ListNode *ptr = list1;
        if(list1 -> val > list2 -> val) {
            ptr = list2;
            list2 = list2 -> next;
        }
        else {
            list1 = list1 -> next;
        }
        ListNode *curr = ptr;
        
        while(list1 &&  list2) {
            if(list1 -> val < list2 -> val) {
                curr->next = list1;
                list1 = list1 -> next;
            }
            else {
                curr->next = list2;
                list2 = list2 -> next;
            }
            curr = curr -> next;
        }
        
        if(!list1)
            curr -> next = list2;
        else
            curr -> next = list1;
            
        return ptr;
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
    // Create two sorted linked lists
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    ListNode* list1 = createLinkedList(arr1, n1);
    ListNode* list2 = createLinkedList(arr2, n2);

    // Solution instance
    Solution solution;

    // Merge the two lists
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Print the merged list
    cout << "Merged List: ";
    printLinkedList(mergedList);

    // Clean up memory
    ListNode* temp;
    while (mergedList != nullptr) {
        temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }

    return 0;
}
