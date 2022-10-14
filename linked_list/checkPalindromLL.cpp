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
    
    ListNode* reversell(ListNode* root){
       ListNode* prev=NULL;
       ListNode* curr=root->next;
       ListNode* nxt=NULL;
       while(curr!=NULL){
           nxt=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nxt;
       }
        root->next=prev;
        return prev;
    }   
    
public:
    bool isPalindrome(ListNode* head) {
//       patil_gm
        ListNode* slow =head;
        ListNode* fast =head->next;
        if(head->next==NULL||head==NULL)return true;
       
        while( fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)fast=fast->next;
        }
        ListNode* middle=reversell(slow);
        // if(middle==NULL)cout<<"not present middle";
        while(middle!=NULL){
            if(head->val!=middle->val){
                return false;
            }
            head=head->next;
            middle=middle->next;
        }
        return true;
    }
};
