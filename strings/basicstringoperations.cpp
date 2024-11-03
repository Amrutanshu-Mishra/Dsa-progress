#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    string str="abcacbade";
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    for(int i=0;i<str.length();i++){
        arr[str[i]-'a']+=1;
    }
    char ans='a';
    int maxfreq=0;
    for(int i=0;i<26;i++){
        maxfreq=max(maxfreq,arr[i]);
    }
    for(int i=0;i<26;i++){
        if(arr[i]==maxfreq){
            ans=i+'a';
            break;
        }
    }

    cout<<ans<<" "<<maxfreq;


}