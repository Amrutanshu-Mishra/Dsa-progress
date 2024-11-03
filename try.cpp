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
ll merge(vector<ll> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //Modification 1: cnt variable to count the pairs:
    ll cnt = 0;

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); //Modification 2
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt; // Modification 3
}

ll mergeSort(vector<ll> &arr, int low, int high) {
    ll cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

ll count_inversions(vector<ll>&a, int n) {

    // Count the number of pairs:
    return mergeSort(a, 0, n - 1);
}

void bfs(vector<vector<int>>&adj,unordered_map<int,bool>&visited,vector<int>&ans,int node,map<tuple<int,int>,int>&wts){
    queue<int>q;
    q.push(node);
    visited[node]=1;
    bool pos=true;
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
        ans.push_back(frontNode);
        for(auto i:adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
                tuple<int,int>t1=make_tuple(frontNode,i);
                if(pos){
                    wts[t1]=2;
                }
                else{
                    wts[t1]=5;
                }
                pos=!pos;
            }
        }
    }
}


long double dist(long double ax,long double ay,long double bx, long double by){
    long double e1=abs(ax-bx);
    long double e2=abs(ay-by);
    e1=e1*e1;
    e2=e2*e2;
    long double ans=e1+e2;
    ans=sqrtl(ans);
    return ans;
}


bool is_prime(ll num){
    if(num==1){
        return false;
    }
    for(ll i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
bool is_sorted(vll v){
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]){
            return false;
        }
    }
    return true;
}
static bool cmp(pair<ll,ll>a,pair<ll,ll>b){
    if(a.second<b.second){
        return true;
    }
    return false;
}
class Compare{
    public:
    bool operator()(pair<ll,int>a,pair<ll,int>b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    }
}; 


void solve(){
    int n,m;
    cin>>n>>m;
    vll a(n);
    vll b(m);
    loop(0,n){
        cin>>a[i];
    }
    loop(0,m){
        cin>>b[i];
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    loop(1,n){
        a[i]=a[i]+a[i-1];
    }
    ll curr=0;
    ll mini=0;
    ll idx1=-1;
    loop(0,n){
        int idx=upper_bound(a.begin(),a.end(),b[i]+curr)-a.begin()-1;
        if(idx==n-1){
            mini+=(n-1-idx)*i;
            idx1=n-1;
            break;
        }
        mini+=(idx-idx1)*i;
        idx1=idx;
        if(idx!=idx1){
            curr=a[idx];
        }
        
    }
    if(idx1<n-1){
        cout<<"ans "<<-1<<endl;
        return;
    }
    cout<<"ans "<<mini<<endl;
}  


int main(){ 
    int t;
    cin>>t;
    // t=1;
    for(int j=0;j<t;j++)
    {
        solve();
    }
    
}