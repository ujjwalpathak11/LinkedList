class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head->next==NULL)    return 1;
        Node* tr=head;
        int cnt=0;
        while(tr!=NULL)
        {
            tr=tr->next;
            cnt++;
        }
        cnt/=2;
        tr=head;//2nd half ka first element :tr
        int cnt2=0;
        while(cnt>cnt2)
        {
            tr=tr->next;
            cnt2++;
        }
        Node* prev=NULL;
        Node* curr=tr;
        Node* temp=NULL;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        // now 2nd half is in reversed state
        bool flag=1;
        while(cnt>0)
        {
            if(prev->data != head->data)
            {
                flag=0;
                break;
            }
            head=head->next;
            prev=prev->next;
            cnt--;
        }
        return flag;
    }
};
