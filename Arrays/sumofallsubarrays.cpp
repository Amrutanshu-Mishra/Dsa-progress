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
    int ans=1;
    int tempans=1;
    int previousdiff=arr[1]-arr[0];
    int currentdiff;
    for(int i=1;i<n-1;i++){
        currentdiff=arr[i+1]-arr[i];
        if(currentdiff==previousdiff){
            tempans+=1;
        }
        else{
            tempans+=1;
            ans=max(ans,tempans);
            tempans=0;
            previousdiff=currentdiff;
            }
    }
    cout<<ans;
        

}