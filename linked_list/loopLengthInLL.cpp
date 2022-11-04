// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    int ans=1;
    int c=0;
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL && fast->next->next != NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            slow=slow->next;
            c++;
            break;
        }
    }
    if(c!=0){
    while(fast!=slow){
        slow=slow->next;
        ans++;
    }
    return ans;
    }
    else return 0;
}


struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);


// } Driver Code Ends


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
  




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}
