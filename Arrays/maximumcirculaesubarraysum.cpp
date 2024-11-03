#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int num){
    int currsum=0;
    int maxsum=INT16_MIN;
    for(int i=0;i<num;i++){
        currsum=currsum+a[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum+kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum);

}