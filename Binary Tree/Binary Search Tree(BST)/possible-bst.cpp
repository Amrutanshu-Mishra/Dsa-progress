//we would be given two variables start and end .we have to print all the possibe trees for natural numbers between start to end(both included)
#include<iostream>
#include<vector>
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
vector<Node*>constructTrees(int start,int end){
    vector<Node*>trees;
    if (start>end)
    {
        trees.push_back(NULL);
        return trees;
    }
    for (int i = start; i <= end; i++)
    {
        vector<Node*>leftSubtrees=constructTrees(start,i-1);
        vector<Node*>rightSubtrees=constructTrees(i+1,end);
        for(int j=0 ;j < leftSubtrees.size();j++){
            Node*left=leftSubtrees[j];
            for (int k = 0; k < rightSubtrees.size(); k++)
            {
                Node*right=rightSubtrees[k];
                Node*node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}
void preorder(Node*root){
    if (root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    vector<Node*>totalTrees=constructTrees(1,3);
    for (int  i = 0; i < totalTrees.size(); i++)
    {
        cout<<i+1<<":";
        preorder(totalTrees[i]);
        cout<<endl;
    }
    
}