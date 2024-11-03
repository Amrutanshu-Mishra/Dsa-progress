#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int isPerfect1(int num){
    int sum=0;
    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num){
        return true;
    }
    return false;
}
bool isPerfect2(int num){
    int sum=1;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            if(i==num/i){
                sum+=i;
            }
            else{
                sum+=i+num/i;
            }            
        }
    }
    if (sum==num)
    {
        return true;
    }
    return false;
}
int maxSum(int arr[],int n,int k){
    int sum=0;
    int ans=0;
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }
    ans=sum;
    for(int i=k;i<n;i++){
        sum=sum+arr[i-k]-arr[i];
        ans=max(ans,sum);
    }
    return ans;
}
int maxNumberofPerfects(int arr[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if (isPerfect2(arr[i]))
        {
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    return maxSum(arr,n,k);
}
int main(){
    int arr[8]={28,2,3,6,496,99,8128,243};
    int k=4;
    int n=8;
    cout<<maxNumberofPerfects(arr,n,k);
}