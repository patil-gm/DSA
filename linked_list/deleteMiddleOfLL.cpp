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

// ************   BRUTE FORCE APPROCH.  ************
   ListNode* deleteMiddle(ListNode* head) {
        
        int cnt=0;
        ListNode* temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        if(cnt<2)return NULL;
        if(cnt%2==0){
            cnt=cnt/2;
        }
        else{
            cnt=(cnt/2);
        }
        ListNode* l1=head;
        ListNode* prev=NULL;
        while(cnt>0){
            cnt--;
            prev=l1;
            l1=l1->next;
        }
        prev->next=l1->next;
        return head;
        
    }



// ************   OPTIMIZED APPROCH.  ************

ListNode* deleteMiddle(ListNode* head) {
    
    if(head==NULL || head->next==NULL) return NULL;       //if 0 or 1 node is present, return NULL
    
    ListNode *prev=NULL, * slow=head, * fast=head;        //Maintain 3 Pointers; prev, slow, fast
    
    while(fast!=NULL and fast->next!=NULL){                  
        prev=slow;                                        //update prev = slow
        slow=slow->next;                                  //increment slow once, slow = slow->next; 
        fast=fast->next->next;                            //increment fast twice, fast = fast->next->next;
    }
    
    prev->next=slow->next;                                //update connection 
    delete slow;                                          //deleting middle node
    return head;                                          //return head;
}




 
