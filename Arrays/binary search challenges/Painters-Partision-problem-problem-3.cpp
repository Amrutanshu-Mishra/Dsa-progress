#include<iostream>
#include<climits>
using namespace std;
int paintersrequired(int boards[],int n,int limit){
    int sum=0;//this will represent the amount of units a painter has to paint;
    int painter=1;
    for (int i = 0; i < n; i++)
    {
        if (sum+boards[i] > limit)
        {
            painter++;
            sum=0;
        }
        sum+=boards[i];
    }
    return painter;
}
int PaintersPartion(int boards[],int n,int m){
    int k=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=boards[i];
        k=max(k,boards[i]);
    }
    int low=k,high=sum;
    while(low<high){
        int mid=(low+high)/2;
        int required_painters=paintersrequired(boards,n,mid);
        if (required_painters <= m)
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}
int main(){
    int arr[4]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<"Minimum time to paint boards :"<<PaintersPartion(arr,n,m);
}