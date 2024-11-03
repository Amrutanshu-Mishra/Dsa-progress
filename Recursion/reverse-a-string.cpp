#include<iostream>
#include<string>
using namespace std;
string reverse(string s,int n){
    if(n>(s.length()/2)){
        return s;
    }
    int temp=s[n];
    s[n]=s[s.length()-1-n];
    s[s.length()-1-n]=temp;
    reverse(s,n+1);
    return s;
}
int main(){
    string str="binod";
    cout<<reverse(str,0);

}