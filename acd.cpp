#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define ll long long 
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define loop(j,n,k) for(int i = j; i < n;i+=k)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef vector<ll> vll;
int game(vll p, vll arr, ll n,ll b, ll s,ll bs, ll ss,ll k){
    if(k==0){
        if(bs>ss){
            return 1;
        }
        else if(ss<bs){
            return 2;
        }
        else{
            return 0;
        }
    }
    
}
ll solve(string s,int i,int count,vector<vector<ll>>&dp){
    if(i==s.size()&&count!=0){
        return INT64_MAX;
    }
    if(i==s.size()-1&&count!=0){
        return INT64_MAX;
    }
    if(i==s.size()-2&&count!=0){
        return INT64_MAX;
    }

    if(count==0){
        ll ele1=0;
        for(int j=i;j<s.size();j++){
            ele1=ele1*10+(s[j]-'0');
        }
        return ele1;
    }
    if(dp[i][count]!=-1){
        return dp[i][count];
    }
    ll ele1=0;
    ll ans=INT64_MAX;
    for(int j=i;j<s.size()-2;j++){
        ele1=ele1*10+(s[j]-'0');
        ll ex=solve(s,j+1,count-1,dp);
        if(ex!=INT64_MAX){
            ans=min<ll>(ans,ele1+ex);
            ans=min<ll>(ans,ele1*ex);
        }
    }
    dp[i][count]=ans;
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        // solve();
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<vector<ll>>dp(n+1,vll(n,-1));
        ll ans=solve(s,0,n-2,dp);
        
        cout<<"ans "<<ans<<endl;
    }
}