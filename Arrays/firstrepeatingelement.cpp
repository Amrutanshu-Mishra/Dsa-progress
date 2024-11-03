#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6+2;
    int a[N];
    for(int i=0;i<N;i++){
        a[i]=-1;
    }
    int minidx=INT16_MAX;
    for(int i=0;i<n;i++){
        if(a[arr[i]]==-1){
            a[arr[i]]=i;
        }
        else{
            minidx=min(minidx,a[arr[i]]);
        }
    }
    if(minidx==INT16_MAX){
        cout<<"no element repeats";
        return 0;
    }
    cout<<minidx;
}