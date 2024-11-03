#include<bits/stdc++.h>
#include<iostream>
using namespace std;




int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int sum=a+b;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*sum;
    }
    cout<<ans<<endl;
    cin>>a>>b>>n;
    sum=a+b;
    ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*sum;
    }
    cout<<ans<<endl;
}