#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void flatten(Node*root){
    if (root==NULL)
    {
        return ;
    }
    if (root->left !=NULL)
    {
        flatten(root->left);
    
        Node*temp=root->right;
        root->right=root->left;
        root->left=NULL;
        Node*t=root->right;
        while (t->right!=NULL)
        {
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
}
Node*flatten2(Node*root){
    if (root ==NULL)
    {
        return NULL;
    }
    Node*left1=flatten2(root->left);
    Node*right1=flatten2(root->right);
    if (left1 !=NULL)
    {
        left1->right=right1;
        left1->left=NULL;
    }
    if (right1 !=NULL)
    {
        root->right=left1;
    }
    root->left=NULL;
    return root;
}
void inorder(Node*root){
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node*root=new Node(4);
    root->left=new Node(9);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    flatten(root);

    inorder(root);
}