#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool balanced_parenthesis(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    return true;
}
int main(){
    string s="{([])}";
    cout<<balanced_parenthesis(s);
}