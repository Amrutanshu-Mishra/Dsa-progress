#include<iostream>
#include<string>
using namespace std;
string move_x(string s){
    if (s.length()==1)
    {
        return s;
    }
    char ch=s[0];
    string ros=move_x(s.substr(1));
    if (ch=='x')
    {
        return ros+ch;
    }
    else{
        return ch+ros;
    }
    
}
int main(){
    cout<<move_x("axxbdxcefxhix");
}