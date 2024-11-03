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
void even_after_odd(node*&head){
    node*odd=head;
    node*even=head->next;
    node*evenStart=even;
    while (odd->next!=NULL&&even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if (even->next!=NULL)
    {
        even->next=NULL;
    }
}
void display(node*&head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
int main(){
    node*head=NULL;
    int arr[6]={1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        insert_at_tail(head,arr[i]);
    }
    display(head);
    even_after_odd(head);
    display(head);
    return 0;
}