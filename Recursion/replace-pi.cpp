//write a program to replace pi with 3.14
#include<iostream>
#include<string>
using namespace std;
string replace_pi(string s){
    if(s.length()==0){
        return " ";
    }
    if (s[0]=='p')
    {
        if(s[1]=='i'){
            cout<<3.14;
            replace_pi(s.substr(2));
        }
        else
        {   cout<<s[0];
            replace_pi(s.substr(1));
        }
        
    }
    else
    {
        cout<<s[0];
        replace_pi(s.substr(1));
    }
}
int main(){
    cout<<replace_pi("pippxxppiixipi");
}