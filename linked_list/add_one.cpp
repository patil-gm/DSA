 Node* addone(Node* head,int carry){
       Node* temp=head;
       Node* prev = temp;
       while(temp!=NULL){
        int sum=temp->data+carry;
        temp->data=sum%10;
        carry=sum/10;
        prev =temp;
        
        temp=temp->next;
       }
       
      if(carry!=0){
          Node* newnode=new Node(carry);
          prev->next=newnode;

      }

        return head;
        
    }
    
    Node* reverse(Node* head){
        Node*prev=NULL;
        Node* curr=head;
        Node* nxt=curr->next;
        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=nxt;
        if(nxt)nxt=nxt->next;
        }
        return prev;
    }
    
    public:
    Node* addOne(Node *head) 
    {   head = reverse(head);
        head = addone(head,1);
        return reverse(head);
    }

