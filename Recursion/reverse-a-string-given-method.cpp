#include<iostream>
#include<string>
using namespace std;
string reverse(string s){
    if(s.length()==0){
        return" ";
    }
    reverse(s.substr(1));
    cout<<s[0];
}
int main(){
    reverse("binod");
}