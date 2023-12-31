class Solution
{
    public:
    bool detectLoop(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        if(head==NULL || head->next==NULL)
        {
            return false;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            return true;
        }
        return false;
    }
};
