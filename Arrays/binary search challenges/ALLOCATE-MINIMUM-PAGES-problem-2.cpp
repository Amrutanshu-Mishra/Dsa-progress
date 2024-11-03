// their a n books with their number of pages given in an array of size n which are to be divided among m students.Allocate the pages in such a way that maximum pages allotted to a student is minimum 
#include<iostream>
using namespace std;
bool isFeasible(int arr[],int n,int m,int min){
    int studentsRequred=1,sum=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>min)
        {
            return false;
        }
        if(sum+arr[i]>min){
            studentsRequred++;
            sum=arr[i];
            if (studentsRequred>m)
            {
                return false;
            }
            
        }
        else
        {
            sum+=arr[i];
        }   
    }
    return true;
}
int allocate(int arr[],int n,int m){
    int sum=0;
    if (m>n)
    {
        return -1;
    }
    
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int start=0,end=n-1,ans=INT16_MAX;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (isFeasible(arr,n,m,mid))
        {
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
            start=mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[4]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<"The minimum no. of :"<<allocate(arr,n,m)<<endl;
    return 0;
}