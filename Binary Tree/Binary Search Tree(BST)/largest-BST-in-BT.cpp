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
struct Info{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};
Info largestBST(Node*root){
    if (root == NULL)
    {
        return {0,INT16_MAX,INT16_MIN,0,true};
    }
    Info left=largestBST(root->left);
    Info right=largestBST(root->right);
    Info curr;
    curr.size=left.size=right.size+1;
    if (left.isBST && right.isBST && (left.min < root->data) && (right.max > root->data))
    {
        curr.min=min(left.min,right.min);
        curr.max=max(left.max,right.max);
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(left.size,right.size);
    curr.isBST=false;
    return curr;
}
int main(){
    Node*root=new Node(15);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(5);
    cout<<"Largest BST in :"<<largestBST(root).ans<<endl;
}