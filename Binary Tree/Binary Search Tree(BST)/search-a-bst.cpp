#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
    }
};
Node*searchBST(Node*root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        searchBST(root->left,key);
    }
    if (root->data<key)
    {
        searchBST(root->right,key);
    }
}
int main(){
    Node*root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    if (searchBST(root,5)==NULL)
    {
        cout<<"key doesnt exist";
    }
    else{
        cout<<"key exists";
    }
    return 0;
}