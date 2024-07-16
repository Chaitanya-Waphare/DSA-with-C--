//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
public:
    // Function to reverse the linked list
    Node* Reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while (curr != NULL) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev; // Return the new head of the reversed list
    }

    // Function to check whether the list is palindrome
    bool isPalindrome(Node *head) {
        if (head == NULL || head->next == NULL) {
            return true;
        }

        // Find the middle of the linked list
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the linked list
        Node* secondHalf = Reverse(slow);
        Node* firstHalf = head;

        // Save the start of the reversed half to restore the list later
        Node* reverseHead = secondHalf;

        // Compare both halves
        bool isPalin = true;
        while (secondHalf != NULL) {
            if (firstHalf->data != secondHalf->data) {
                isPalin = false;
                break;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        // Restore the original list before returning
        Reverse(reverseHead);

        return isPalin;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}
