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
void insert_at_tail(node* &head,int val){
    node*n=new node(val);
    if (head==NULL)
    {
        head=n;
        return;
    }
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insert_at_head(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
    return;
}
void display(node*head){
    while (head->next!=NULL)
    {
        cout<<(head->data)<<"->";
        head=head->next;
    }
    cout<<(head->data)<<"->";
    cout<<"NULL";
    return;
}
bool link_list_search(node*head,int key){
    while (head->next!=NULL)
    {
        if ((head->data)==key)
        {
            return true;
        }
        head=head->next;
    }
    if ((head->data)==key)
    {
        return true;
    }
    return false;
}
int main(){
    node*head=NULL;
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_head(head,5);
    cout<<link_list_search(head,4);
    return 0;
}