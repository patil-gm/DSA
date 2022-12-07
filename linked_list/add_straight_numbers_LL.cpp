/*
You are given two non-empty linked lists representing two non-negative integers. 
The most significant digit comes first and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/


 ListNode* reverseLL(ListNode* head){
       ListNode* prev=NULL;
       ListNode* curr=head;
       ListNode* nxt=NULL;
       while(curr!=NULL){
           nxt=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nxt;
       }
       return prev;
   }
    

  ListNode* addAtTail(ListNode* &head,ListNode* &tail,int data){
      ListNode* temp=new ListNode(data);
      if(head==NULL){
          head=temp;
          tail=temp;
      }
      else{
         tail->next=temp;
          tail=tail->next;
      }
      return head;
  }


 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        
        l1 =reverseLL(l1);
        l2 =reverseLL(l2);
        int carry=0;
        ListNode* ans=NULL;
        ListNode* tail=NULL;
        
        while(l1!=NULL&&l2!=NULL){
            int sum=l1->val+l2->val+carry;
             carry=sum/10;
            int digit=sum%10;
            ans = addAtTail(ans,tail,digit);
            l1=l1->next;
            l2=l2->next;
        }
       while(l1!=NULL){
           int sum=l1->val+carry;
           carry=sum/10;
            int digit=sum%10;
            ans = addAtTail(ans,tail,digit);
            l1=l1->next;
            // l2=l2->next;
       }
        
        while(l2!=NULL){
            int sum=l2->val+carry;
            carry=sum/10;
            int digit=sum%10;
            ans = addAtTail(ans,tail,digit);
             // l1=l1->next;
            l2=l2->next;
        }
        while(carry!=0){
           int digit=carry;
            carry=0;
            ans = addAtTail(ans,tail,digit);
        }
        
        return reverseLL(ans);
    }


