#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        long long int ans=0;
        if(a1>a2&&a1>a3){
            ans=a1+a2+a3+min<long long int>(min<long long int>(a1+a2-a3,a1-a2+a3)+1,a4);
        }
        else if(a1>a2&& a1<=a3){
            if(a1+a2>a3){
                ans=a1+a2+a3+min<long long int>(min<long long int>(a1+a2-a3,a1-a2+a3)+1,a4);
            }
            else{
                ans=2*(a1+a2+1);
            }
        }
        else if(a1<=a2&&a1>a3){
            if(a1+a3>a2){
                ans=a1+a2+a3+min<long long int>(min<long long int>(a1+a2-a3,a1-a2+a3)+1,a4);
            }
            else{
                ans=2*(a1+a3+1);
            }
        }
        else if(a1==a2&&a1==a3){
            ans=a1+a2+a3+min(a1+1,a4);
        }
        else{
            ans=2*a1;
        }
        cout<<ans<<endl;
    }
}