#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void subseq_with_ascii(string s,string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq_with_ascii(ros,ans);
    subseq_with_ascii(ros,ans+ch);
    subseq_with_ascii(ros,ans+to_string(code));
}
int main(){
    subseq_with_ascii("AB"," ");

}