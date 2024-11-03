#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;
int subarraysumzero(int arr[],int n){
    unordered_map<int,int>m;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        m[sum]++;
    }
    int ans=0;
    for(auto i:m){
        if(i.second>1){
            ans+=i.second*(i.second-1)/2;
        }
        if(i.first==0){
            ans+=i.second;
        }
    }
    cout<<ans<<endl;
}