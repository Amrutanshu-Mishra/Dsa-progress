#include<bits/stdc++.h>
#include<iomanip>
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

const int M=998244353;

int get_bit(ll n,int pos){
    return (n&(1<<pos))!=0;
}
void set_bit(int &n,int pos){
    n=n|(1<<pos);
}
void clear_bit(int &n,int pos){
    int ele=1<<pos;
    ele=~ele;
    n=n&ele;
}
void update_bit(int &n,int pos,int value){
    int mark=~(1<<pos);
    n=n&mark;
    n=n|(value<<pos);
}
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
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
bool cmp(vector<int>a,vector<int>b){
    int cnt=0;
    for(int i=0;i<3;i++){
        if(a[i]!=b[i]){
            cnt++;
        }
    }
    if(cnt!=1){
        return false;
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    vi arr(n);
    ll c=0;
    loop(0,n) cin>>arr[i];
    vector<vector<int>>v;
    for(int i=0;i<n-2;i++){
        vi v1;
        v1.push_back(arr[i]);
        v1.push_back(arr[i+1]);
        v1.push_back(arr[i+2]);
        v.push_back(v1);
    }
    // vector<vector<int>>v2;
    // vector<int>a1;
    // for(int i=0;i<v.size();i++){
    //     for(int j=i+1;j<v.size();j++){
    //         if(cmp(v[i],v[j])){
    //             c++;
    //         }
    //     }
    // }
    // cout<<c<<endl;
    set<vector<int>>s1;
    for(int i=0;i<v.size();i++){
        s1.insert({v[i][0],v[i][1]});
    }
    
}
int main(){
    int t;
    cin>>t;
    // t=1;
    while(t--){
        solve();
    }
    // cout<<(4&(-1*4))<<endl;

}