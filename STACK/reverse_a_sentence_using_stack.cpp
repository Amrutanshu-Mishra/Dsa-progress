#include<iostream>
#include<stack>
#include<string>
using namespace std;
string sentence_reverse(string s){
    stack<string>rev;
    for(int i=0;i<s.size();i++){
        string e="";
        if(s[i]==' '){
            rev.push(e);
            e="";
        }
        else{
            e+=s[i];
        }
    }
    string ans="";

    while(!rev.empty()){
        string e1=rev.top();
        ans+=e1;
        rev.pop();
    }
    return ans;
}
int main(){

}