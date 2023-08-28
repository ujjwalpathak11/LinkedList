Node *removeDuplicates(Node *head)
{
 Node* tr=head;
 while( tr && tr->next)
 {
     if(tr->data == tr->next->data)
     {
         Node* temp=tr->next;
         tr->next=temp->next;
         delete temp;
     }
     else
     {
         tr=tr->next;
     }
 }
 return head;
}
