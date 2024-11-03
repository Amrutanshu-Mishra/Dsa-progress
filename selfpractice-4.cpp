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
typedef vector<ll> vll; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
void solve(){
	int n;
	cin>>n;
	vll v(n);
	loop(0,n) cin>>v[i];
	loop(0,n) v[i]=v[i]%2;
	vector<ii>v1;
	if(v[0]==v[n-1]){
		loop(1,n-1){
			if(v[i]!=v[0]){
				v1.push_back({0,i});
			}
		}
		loop(0,n-1){
			v1.push_back({i,n-1});
		}
	
	}
	else{
		int idx=0;
		loop(1,n-1){
			if(v[i]==v[0]){
				idx=i;
			}
		}
		loop(0,idx){
			if(v[i]==v[idx]){
				v1.push_back({i,idx});
			}
		}
		loop(1,n){
			if(v[i]!=v[0]){
				v1.push_back({0,i});
			}
		}
	}
	// cout<<"ans.."<<endl;
	cout<<v1.size()<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1[i].first+1<<" "<<v1[i].second+1<<endl;
	}
}
int main(){
    int t;
	cin>>t;
    while(t--){
        solve();
    }
}