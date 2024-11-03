#include<bits/stdc++.h>
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
void solve(){
    int n;
    cin>>n;
    ll arr[n];
    loop(0,n) cin>>arr[i];
    loop(0,n) arr[i]=arr[i]%3;
    unordered_map<ll,int>m;
    loop(0,n) m[arr[i]]++;
    if(m[0]>=3){
        cout<<"YES"<<endl;
        return ;
    }
    if(m[0]&&m[1]&&m[2]){
        cout<<"YES"<<endl;
        return ;
    }
    if(m[1]>=3){
        cout<<"YES"<<endl;
        return ;
    }
    if(m[2]>=3){
        cout<<"YES"<<endl;
        return ;
    }
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}