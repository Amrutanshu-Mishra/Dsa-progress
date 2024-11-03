#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
class queue{
    node*head;
    node*tail;
    public:
    queue(){
        head=NULL;
        tail=NULL;
    }
    void push(int value){
        if(head==NULL){
            head=new node(value);
            tail=head;
            return;
        }
        tail->next=new node(value);
        tail=tail->next;
    }
    void pop(){
        if(head==NULL){
            cout<<"queue underflow"<<endl;
            return;
        }
        node*node1=head;
        head=head->next;
        delete node1;
    }
    int peek(){
        if(head==NULL){
            cout<<"nothing to see"<<endl;
            return -1;
        }
        return head->data;
    }
    bool empty(){
        if (head==NULL)
        {
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.empty()<<endl;
    return 0;
}