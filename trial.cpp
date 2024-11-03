#include<bits/stdc++.h>
// #include<iostream>
// #include<iomanip>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define ll long long 
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define loop(j,n) for(int i = j; i < n;i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef vector<ll> vll;
 
const int M=1e9+7;
int get_bit(ll n,ll pos){
    return (n&(1LL<<pos))!=0;
}
ll set_bit(ll n,int pos){
    n=n|(1<<pos);
    return n;
}
ll clear_bit(ll n,int pos){
    int ele=1<<pos;
    ele=~ele;
    n=n&ele;
    return n;
 
}
void update_bit(int &n,int pos,int value){
    int mark=~(1<<pos);
    n=n&mark;
    n=n|(value<<pos);
}
ll gcd(ll a,ll b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    ll ele=a*b;
    ll ele1=gcd(a,b);
    return ele/ele1;
}
ll binexp(ll a,ll b,ll m){
    ll result=1;
    while(b>0){
        if(b&1){
            result=(result*1LL*a)%m;
 
        }
        a=(a*1LL*a)%m;
        b>>=1;
    }
    return result;
}
ll modexp(ll a){
    return binexp(a,M-2,M);
}
bool is_sorted(vll v){
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]){
            return false;
        }
    }
    return true;
}
void bfs(vector<vector<int>>&adj,unordered_map<int,bool>&visited,vector<int>&ans,int node){
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
        ans.push_back(frontNode);
        for(auto i:adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}
bool cmp(string a,string b){
    if(a.size()!=b.size()){
        return a.size()<b.size();
    }
    for(int i=a.size()-1;i>=0;i--){
        if((a[i]-'0')==(b[i]-'0')){
            // return true;
            continue;
        }
        
        else{
            if((a[i]-'0')<(b[i]-'0')){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,set<int>>m;
    ll bc=0;
    ll fc=0;
    for(int i=n-1;i>=0;i--){
        m[s[i]].insert(i);
    }
    for(auto i:m['b']){
        int curr=i;
        bool pos=false;
        vi indices;
        if(m['a'].upper_bound(curr)==m['a'].end()){
            continue;
        }
        int idx1=*m['a'].upper_bound(curr);
        indices.push_back(idx1);
        m['a'].erase(idx1);
        curr=idx1;
        if(m['c'].upper_bound(curr)==m['c'].end()){
            m['a'].insert(indices[0]);
            continue;
        }
        idx1=*m['c'].upper_bound(curr);
        curr=idx1;
        indices.push_back(idx1);
        m['c'].erase(idx1);
        if(m['k'].upper_bound(curr)==m['k'].end()){
            m['a'].insert(indices[0]);
            m['c'].insert(indices[1]);
            continue;
        }
        idx1=*m['k'].upper_bound(curr);
        curr=idx1;
        indices.push_back(idx1);
        bc++;
    }
    // cout<<bc<<endl;
    for(auto i:m['f']){
        int curr=i;
        bool pos=false;
        vi indices;
        if(m['r'].upper_bound(curr)==m['r'].end()){
            continue;
        }
        int idx1=*m['r'].upper_bound(curr);
        indices.push_back(idx1);
        m['r'].erase(idx1);
        curr=idx1;
        if(m['o'].upper_bound(curr)==m['o'].end()){
            m['r'].insert(indices[0]);
            continue;
        }
        idx1=*m['o'].upper_bound(curr);
        curr=idx1;
        indices.push_back(idx1);
        m['o'].erase(idx1);
        if(m['n'].upper_bound(curr)==m['n'].end()){
            m['r'].insert(indices[0]);
            m['o'].insert(indices[1]);
            continue;
        }
        idx1=*m['n'].upper_bound(curr);
        curr=idx1;
        indices.push_back(idx1);
        if(m['t'].upper_bound(curr)==m['t'].end()){
            m['r'].insert(indices[0]);
            m['o'].insert(indices[1]);
            m['n'].insert(indices[2]);
        }
        fc++;
    }
    // cout<<bc<<" "<<fc<<endl;
    ll ans=n;
    ans-=(bc*3LL);
    ans-=(fc*4LL);
    ll e1=bc/4;
    ll e2=fc/5;
    ans-=(e1*3LL);
    ans-=(e2*4LL);
    ans=max<ll>(ans,0);
    cout<<ans<<endl;
}      
int main(){
    vll pre(2*1e5+1,0);
    loop(1,2*1e5+1){
        int tmp=i;
        int count=0;
        ll curr=1;
        while (curr<=tmp)
        {
            curr=curr*3LL;
            count++;
        }
        pre[i]=count;
    }
    vll pre1(2*1e5+1,0);
    loop(1,2*1e5+1){
        pre1[i]=pre[i]+pre1[i-1];
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        // cout<<pre1[r]<<" "<<pre1[l-1]<<" "<<pre[l]<<endl;
        ll tmp=pre1[r]-pre1[l-1]+pre[l];
        cout<<tmp<<endl;
    }
}