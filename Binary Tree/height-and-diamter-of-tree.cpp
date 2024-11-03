#include<iostream>
#include<climits>
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
int height(Node*root){
    if (root==NULL)
    {
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int diameter(Node*root,int *height){
    if (root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ldiameter=diameter(root->left,&lh);
    int rdiameter=diameter(root->right,&rh);
    int curr_height=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(curr_height,max(ldiameter,rdiameter));
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<height(root)<<endl;
    int height=0;
    cout<<diameter(root,&height);
}
