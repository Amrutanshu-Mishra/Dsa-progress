#include<iostream>
using namespace std;
void computeNumberFromSubarray(int arr[],int n,int k){
    int sum=0;
    pair<int,int>ans;
    bool result=false;
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];//using the fact that a number is divided by 3 if sum of its digits is divide be 3
    }
    if (sum%3==0)
    {
        ans=make_pair(0,k-1);
        result=true;
    }
    for (int i = k; i < n; i++)
    {
        if (result==true)
        {
            break;
        }
        
        sum=sum-arr[i-k];
        sum=sum+arr[i];
        if (sum%3==0)
        {
            ans=make_pair(j-k+1,j);
            result=true;
        }
        if (!result)
        {
            ans=make_pair(-1,0);
        }
        if (ans.first==-1)
        {
            cout<<" no such subarray exist"<<endl;
        }
        else{
            for (int i = ans.first; i <=ans.second ; i++)
            {
                cout<<arr[i]<<endl;
            }
            cout<<endl;
        }
        
    }
    
}