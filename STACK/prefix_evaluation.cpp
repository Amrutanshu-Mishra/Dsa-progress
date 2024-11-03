#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prefix_evaluation(string s){
    stack<char>st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='+'){
            int e1=st.top()-'0';
            st.pop();
            int e2=st.top()-'0';
            st.pop();
            int e3=e1+e2;

            st.push(e3+'0');
        }
        else if(s[i]=='-'){
            int e1=st.top()-'0';
            st.pop();
            int e2=st.top()-'0';
            st.pop();
            int e3=e1-e2;
            st.push(e3+'0');
        }
        else if(s[i]=='*'){
            int e1=st.top()-'0';
            st.pop();
            int e2=st.top()-'0';
            st.pop();
            int e3=e1*e2;
            st.push(e3+'0');
        }
        else if(s[i]=='/'){
            int e1=st.top()-'0';
            st.pop();
            int e2=st.top()-'0';
            st.pop();
            int e3=e1/e2;
            st.push(e3+'0');
        }
        else{
            st.push(s[i]);
        }
    }
    int ans=st.top()-'0';
    st.pop();
    return ans;
}
int main(){
    cout<<prefix_evaluation("-+7*45+20")<<endl;
}