#include<iostream>
#include<stack>
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
void zigzag(Node*root){
    if (root == NULL)
    {
        return;
    }
    stack<Node*>currlvl;
    stack<Node*>nextlvl;
    bool lefttoright=true;
    currlvl.push(root);
    while (!currlvl.empty())
    {
        Node*temp=currlvl.top();
        currlvl.pop();
        if(temp != NULL){
            cout<<temp->data<<" ";
            if (lefttoright)
            {
                if(temp->left != NULL){
                    nextlvl.push(temp->left);
                }
                if(temp->right !=NULL){
                    nextlvl.push(temp->right);
                }
            }
            else{
                if(temp->right != NULL){
                    nextlvl.push(temp->right);
                }
                if (temp->left != NULL )
                {
                    nextlvl.push(temp->left);
                }
            }
        }
        if (currlvl.empty())
        {
            swap(currlvl,nextlvl);
            lefttoright=!lefttoright;
        }
    }
}
int main(){
    Node*root=new Node(12);
    root->left=new Node(9);
    root->right=new Node(15);
    root->left->left=new Node(5);
    root->left->right=new Node(10);
    zigzag(root);
    cout<<endl;
}