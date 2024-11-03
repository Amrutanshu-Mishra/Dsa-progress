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
int sumnode(Node*root){
    if (root==NULL)
    {
        return NULL;
    }
    return (sumnode(root->left)+sumnode(root->right)+root->data);
}
