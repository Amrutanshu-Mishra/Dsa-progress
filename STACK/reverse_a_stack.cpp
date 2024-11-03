#include<iostream>
#include<stack>
using namespace std;
void insert_at_bottom(stack<int>&st,int e){
    if(st.empty()){
        st.push(e);
        return;
    }
    int element=st.top();
    st.pop();
    insert_at_bottom(st,e);
    st.push(element);
}
void reverse_stack(stack<int>&st){
    if (st.size()==1)
    {
        return;
    }
    int element=st.top();
    st.pop();
    reverse_stack(st);
    insert_at_bottom(st,element);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse_stack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}