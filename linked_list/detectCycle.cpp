/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
//       patil_gm
        unordered_map<ListNode*,int> map;
        while(head){
            if(++map[head]>1)return true;
    
            head=head->next;
        }
         return false;
    }
   
};
