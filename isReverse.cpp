struct Node* reverseList(struct Node *head)
    {
        if(head==NULL)
        return head; 
        
        struct Node* prev=NULL;
        struct Node* curr=head;
        struct Node* temp=NULL;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
