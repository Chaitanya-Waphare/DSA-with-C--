#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution class
class Solution {
public:
    ListNode* Reverse(ListNode* Head) {
        ListNode* prev = NULL;
        ListNode* curr = Head;
        ListNode* forward = NULL;
        while(curr != NULL) {
            forward = curr-> next;
            curr-> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = Reverse(l1);
        l2 = Reverse(l2);
        ListNode* dummy = new ListNode(0); // Dummy node to act as a pre-head
        ListNode* temp = dummy;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry != 0) {
            int sum = carry;
            
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10;
            sum = sum % 10;
            temp->next = new ListNode(sum);
            temp = temp->next;
        }
        ListNode* ans = dummy-> next;
        ans = Reverse(ans);
        return ans;
    }
};

// Function to print the linked list
void printList(ListNode* node) {
    while (node != nullptr) {
        std::cout << node->val;
        if (node->next != nullptr) {
            std::cout << " -> ";
        }
        node = node->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating first list: 3 -> 4 -> 2-> 7 (7243)
    ListNode* l1 = new ListNode(3);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(2);
    l1-> next-> next-> next = new ListNode(7);

    // Creating second list: 4 -> 6 -> 5 (564)
    ListNode* l2 = new ListNode(4);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(5);

    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print the result list
    std::cout << "Resultant list: ";
    printList(result);
    return 0;
}
