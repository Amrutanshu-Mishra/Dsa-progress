//we are given an array and we have to use the elements of the array to build a BST
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node*insertAtBST(Node*root,int val){
    if (root==NULL)
    {
        return new Node(val);
    }
    if (root->data>val)
    {
        root->left=insertAtBST(root->left,val);
    }
    if (root->data<val)
    {
        root->right=insertAtBST(root->right,val);
    }
    return root;
}
void inorder(Node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node*root=NULL;
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    root=insertAtBST(root,arr[0]);
    for (int i = 1; i < 6; i++)
    {
        insertAtBST(root,arr[i]);
    }
    inorder(root);
}