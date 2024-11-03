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
bool balancetree(Node*root,int*height){
    if (root==NULL)
    {
        *height=0;
        return true;
    }
    int lh=0,rh=0;
    if (balancetree(root->left,&lh)==false)
    {
        return false;
    }
    if (balancetree(root->right,&rh)==false)
    {
        return false;
    }
    *height=max(lh,rh)+1;
    if (abs(lh-rh)<=1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    int height=0;
    if (balancetree(root,&height)==true)
    {
        cout<<"balancetree"<<endl;
    }
    else{
        cout<<"un balanced tree";
    }
    
}