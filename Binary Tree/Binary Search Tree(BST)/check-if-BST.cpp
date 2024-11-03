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
bool check_if_bst(Node*root,Node*min=NULL,Node*max=NULL){
    if (root==NULL)
    {
        return true;
    }
    if (min != NULL && root->data < min->data)
    {
        return false;
    }
    if (max != NULL && root->data > max->data)
    {
        return false;
    }
    bool left=check_if_bst(root->left,min,root);
    bool right=check_if_bst(root->right,root,max);
    return (left && right);
}
int main(){
    Node*root1=new Node(1);
    root1->left=new Node(2);
    root1->right=new Node(3);
    cout<<check_if_bst(root1,NULL,NULL)<<endl;;
    Node*root2=new Node(5);
    root2->left= new Node(2);
    root2->right= new Node(8);
    cout<<check_if_bst(root2,NULL,NULL);
    return 0;
}