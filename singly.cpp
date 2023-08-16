#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}Node;
Node* head;
void insertionatfirst()
{
    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->data=0;
    newnode->next=head;
    head=newnode;
}
void insertionatlast()
{
    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->data=5;
    node* tr=head;
    while(tr->next !=NULL)
    {
        tr=tr->next;
    }
    tr->next=newnode;
    newnode->next=NULL;
}
void insertatmid(int pos)
{
    Node *tr=head;
    int count=0;
    while(count<pos)
    {
        tr=tr->next;
        count++;
    }
    Node *temp=tr->next;
    Node* newnode=(Node*)malloc(sizeof(Node));
    tr->next=newnode;
    newnode->next=temp;
    newnode->data=9;
}
void print()
{
    Node* tr=head;
    while(tr!=NULL)
    {
        cout<<tr->data<<" ";
        tr=tr->next;
    }
    cout<<endl;
}
int main()
{
    Node* first=(Node*)malloc(sizeof(Node));
    Node* second=(Node*)malloc(sizeof(Node));
    Node* third=(Node*)malloc(sizeof(Node));
    Node* fourth=(Node*)malloc(sizeof(Node));
    head=(Node*)malloc(sizeof(Node));
    
    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    
    head=first;
    
    print();
    insertionatfirst();
    print();
    insertionatlast();
    print();
    insertatmid(2);
    print();
}
