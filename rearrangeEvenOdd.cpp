class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       //if(head==NULL || head->next==NULL)   return head;
       Node* currodd=head;
       Node* curreven=head->next;
       Node* lastodd=head;
       Node* firsteven=curreven;
       while(lastodd->next!=NULL && lastodd->next->next)
       lastodd=lastodd->next->next;
       while(currodd->next!=NULL && curreven->next!=NULL)
       {
           if(currodd->next!=NULL)
           currodd->next=currodd->next->next;
           if(curreven->next!=NULL)
           curreven->next=curreven->next->next;
           currodd=currodd->next;
           curreven=curreven->next;
       }
       lastodd->next=firsteven;
       //return head;
    }
};
