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
void solve(){
	string s;
	cin>>s;
	unordered_map<char,int>m;
	vector<char>v;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	int mf=0;
	for(auto i:m){
		if(i.second>mf){
			mf=i.second;
		}
	}
	for(auto i:m){
		if(i.second==mf){
			// cout<<i.first<<endl;
			v.push_back(i.first);
		}
	}
	int mlen1=INT16_MAX;
	for(int j=0;j<v.size();j++){
		int mlen=0;
		int count=0;

		for(int i=0;i<s.size();i++){
			if(s[i]==v[j]){
				mlen=max(mlen,count);
				count=0;
			}
			else{
				count++;
			}
		}
		if(count!=0){
			mlen=max(mlen,count);
		}
		// if(mlen%2!=0){
		// 	mlen++;
		// }
		// cout<<mlen<<endl;
		int ans=0;
		if(mlen==0){
			ans=0;
		}
		else if(mlen==1){
			ans=1;
		}
		else{

			while (mlen>0)
			{
				mlen=mlen/2;
				ans++;
			}
			
		}
		mlen1=min(mlen1,ans);
	}
	cout<<mlen1<<endl;
}
int main(){
	int t;
	cin>>t;
	while (t--)
	{
		solve();
	}
}


  