#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;
struct node{
    public:
    int key;
    node*left;
    node*right;
    node(int value){
        key=value;
        left=NULL;
        right=NULL;
    }
};
void get_vertical_order(node*root,int hdis,map<int,vector<int>>&m){
    if (root==NULL)
    {
        return;
    }
    m[hdis].push_back(root->key);
    get_vertical_order(root->left,hdis-1,m);
    get_vertical_order(root->right,hdis+1,m);
}
int main(){
    node*root=new node(10);
    root->left=new node(7);
    root->right=new node(4);
    root->left->left=new node(3);
    root->left->right=new node(11);
    root->right->left=new node(14);
    root->right->right=new node(6);
    map<int,vector<int>>m;
    int hdis=0;
    get_vertical_order(root,0,m);
    for(auto i:m){
        for(int j=0;j<i.second.size();j++){
            cout<<i.second[j]<<endl; 
        }
    }
}