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
Node*inordersucc(Node*root){
    Node*curr=root;
    while (root && root->left !=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
Node*deleteBST(Node*root,int key){
    if (root==NULL)
    {
        return NULL;
    }
    if (root->data >key)
    {
        root->left=deleteBST(root->left,key);
    }
    else if(root->data < key){
        root->right=deleteBST(root->right,key);
    }
    else{
        if(root->left == NULL){
            Node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node*temp=root->left;
            free(root);
            return temp;
        }
        else{
            Node*temp=inordersucc(root->right);
            root->data=temp->data;
            deleteBST(root->right,temp->data);
        }
    }
    return root;
}
void inorder(Node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}
int main(){
    Node*root= new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    inorder(root);
    cout<<endl;
    root=deleteBST(root,2);
    inorder(root);
}