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
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node*temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
    return;
}
void insert_at_tail(node*&head,int val){
    if (head==NULL)
    {
        insert_at_head(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    return;
}
void delete_at_head(node*&head){
    node*temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    node*todelete=head;
    temp->next=head->next;
    delete todelete;
    head=head->next;
}
void deletion(node*&head,int pos){
    if(pos==1){
        delete_at_head(head);
    }
    node*temp=head;
    int count=1;
    while (count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}
void display(node*&head){
    node*temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;    
}
int main(){
    node*head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    display(head);
    insert_at_head(head,5);
    display(head);
    deletion(head,5);
    display(head);
}