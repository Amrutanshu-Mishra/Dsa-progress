#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int prec(char c){
    if (c=='^')
    {
        return 3;
    }
    if (c=='*'||c=='/')
    {
        return 2;
    }
    if (c=='+'||c=='-')
    {
        return 1;
    }
    else{
        return -1;
    }
}
string infix_to_postfix(string s){
    stack<char>st;
    reverse(s.begin(),s.end());
    string ans="";
    for (int i = 0; i < s.size(); i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            ans+=s[i];
        }
        if(s[i]==')'){
            st.push(s[i]);
        }
        if(s[i]=='('){
            while ((st.top()!=')')&&(!st.empty()))
            {
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while (!st.empty()&&prec(st.top())>prec(s[i]))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }  
    }
    while (!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    cout<<infix_to_postfix("(a-b/c)*(a/k-l)")<<endl;
}