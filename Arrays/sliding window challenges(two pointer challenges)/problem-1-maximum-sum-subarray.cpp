#include<iostream>
#include<climits>
using namespace std;
int maximum_Subarray_Sum(int arr[],int n,int k,int x){
    int sum=0,ans=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<x){
        ans=sum;
    }
    for(int i=k;i<n;i++){
        sum=sum-arr[i-k];
        sum=sum+arr[i];
        if (sum<x)
        {
            ans=max(ans,sum);
        }
    }
    return ans;
}
int maximum_Subarray_Sum2(int arr[],int n,int k,int x){
    int sum=0,ans=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if (sum<x)
    {
        ans=sum;
    }
    int start=0,end=k-1;
    while (start<end && end<n)
    {
        sum-=arr[start];
        start++;end++;
        sum+=arr[end];
        if(sum<x){
            ans=max(ans,sum);
        }
    }
    return ans;
}
int main(){
    int arr[6]={7,5,4,6,8,9};
    int k=3;
    int x=20;
    int n=6;
    cout<<maximum_Subarray_Sum(arr,n,k,x)<<endl;
    cout<<maximum_Subarray_Sum2(arr,n,k,x)<<endl;
    return 0;
}