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

const int M=1e9+7;


class compare{
    public:
    bool operator()(pair<int,int>a,pair<int,int>b){
        return a.second>b.second;
    }
};

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
// bool check
int find(vector<pair<int,int>>v,int key){
    int s=0;
    int e=v.size()-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(v[mid].first==key){
            return v[mid].second;
        }
        else if(v[mid].first<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
ll calc(ll a,ll b){
    ll ans=0;
    for(int i=0;i<=29;i++){
        if(get_bit(a,i)==0&&get_bit(b,i)==1){
            ans+=(1<<i);
        }
    }
    return ans;
}
// class cmp{
//     public:
//     bool operator()(pair<int,int>a,pair<int,int>b){
//         return a.second<b.second;
//     }
// };
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vi>v;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        vi v1;
        v1.push_back(a);
        v1.push_back(b);
        v1.push_back(c);
        v.push_back(v1);
    }
    if(m%2!=0){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    else{
        bool pos=false;
        map<int,int>m1;
        for(int i=0;i<m;i++){
            m1[v[i][0]]++;
            m1[v[i][1]]++;
            m1[v[i][2]]++;
        }
        for(auto i:m1){
            if((i.second)%2!=0){
                pos=true;
                break;
            }
        }
        if(!pos){
            cout<<"NO"<<endl;
            return;
        }
        int idx=-1;
        for(auto i:m1){
            if((i.second)%2!=0){
                idx=i.first;
            }
        }
        cout<<"YES"<<endl;
        loop(1,n+1){
            if(i==idx){
                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    // t=1;
    while(t--){
        solve();
    }
    
    
}