#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insert_at_head(node*&head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
    return;
}
void insert_at_tail(node*&head,int val){
    node*n=new node(val);
    if (head==NULL)
    {
        insert_at_head(head,val);
        return;
    }
    
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;
}
void insertion(node*&head,int val,int pos){
    int count=1;
    node*n=new node(val);
    node*temp=head;
    if (head==NULL)
    {
        insert_at_head(head,val);
    }
    
    while (count<pos-1)
    {
        temp=temp->next;
        count++;
    }

    n->next=temp->next;
    temp->next=n;
    
}