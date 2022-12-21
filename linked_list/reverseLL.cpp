/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
//    patil_gm
    ListNode* reverseList(ListNode* head) {
       ListNode* curr=head;
       ListNode* prev=NULL;
       ListNode* temp=NULL;
        
      while(curr){
          temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
      }
        return prev;
        
    }
};


// Function to reverse a given Linked List using Recursion
Node* reverseList(Node* head)
{
    if (head->next == NULL)
        return head;
    Node* rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

