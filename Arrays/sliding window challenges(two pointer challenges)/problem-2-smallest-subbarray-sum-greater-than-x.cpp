#include<iostream>
#include<climits>
using namespace std;
int smallestSubarraySum(int arr[],int n,int x){
    int sum=0,size=n+1;
    int start=0;int end=0;
    while (end<n)
    {
        while (sum<=x &&end<n)
        {
            sum+=arr[end];
            end++;
        }
        while (sum>x && start<n);
        {
            size=min(size,end-start);
            sum=sum-arr[start];
            start++;
        }
    }
    return size;
}
int main(){
    int arr[6]={1,4,45,6,10,19};
    int x=51;
    int n=6;
    int minlength=smallestSubarraySum(arr,n,x);
    if (minlength==n+1)
    {
        cout<<"no such subarray exists"<<endl;
    }
    else{
        cout<<"smallest subarray lenth is :"<<minlength<<endl;
    }
}