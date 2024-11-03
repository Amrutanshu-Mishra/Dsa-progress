#include<iostream>
#include<string>
using namespace std;
string remove_all_duplicates(string s){
    if (s.length()==1)
    {
        return s;
    }
    
    char ch=s[0];
    string ros=remove_all_duplicates(s.substr(1));
    if (ch==ros[0])
    {
        return ros;
    }
    else 
    {
        return ch+ros;
    }
}
int main(){
    cout<<remove_all_duplicates("aaaabbbeeecdddd");
}