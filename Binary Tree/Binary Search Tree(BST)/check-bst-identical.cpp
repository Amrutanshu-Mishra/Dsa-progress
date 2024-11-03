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
//my idea
bool isIdentical1(Node*root1,Node*root2){
    if (root1== NULL && root2 ==NULL)
    {
        return true;
    }
    else if(root1 == NULL || root2 == NULL)
    {
        return false;
    }
    else{
        if(root1->data == root2->data){
            bool left=isIdentical1(root1->left,root2->left);
            bool right=isIdentical1(root1->right,root2->right);
            return (left && right);
        }
        else
        {
            return false;
        }
    }
}
//given solution
bool isIdentical2(Node*root1,Node*root2){
    if (root1== NULL && root2 ==NULL)
    {
        return true;
    }
    else if(root1 == NULL || root2 == NULL)
    {
        return false;
    }
    else
    {
        bool cond1=root1->data == root2->data;
        bool cond2=isIdentical2(root1->left,root2->left);
        bool cond3=isIdentical2(root1->right,root2->right);
        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }
}
int main(){
    Node*root=new Node(2);
    root->left=new Node(1);
    root->right=new Node(3);
    Node*root2=new Node(6);
    root->left=new Node(3);
    root->right=new Node(10);
    if(isIdentical1(root,root2) ==true){
        cout<<" BSTs are identical"<<endl;
    }
    else
    {
        cout<<" BSTs are not identical"<<endl;
    }
    if(isIdentical2(root,root2) ==true){
        cout<<" BSTs are identical"<<endl;
    }
    else
    {
        cout<<" BSTs are not identical"<<endl;
    }
}
