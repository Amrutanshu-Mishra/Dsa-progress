#include<iostream>
using namespace std;
int peak_element(int arr[],int n,int left,int right){
    int mid=left+(right-left)/2;
    if ((mid ==0 || arr[mid-1]<=arr[mid])&&(mid==n-1 || arr[mid+1]<=arr[mid]))
    {
        return mid;
    }
    else if (mid>0 && arr[mid]<arr[mid-1])
    {
        return peak_element(arr,n,left,mid);
    }
    else{
        return peak_element(arr,n,mid+1,right);
    }
}
int main(){
    int arr[6]={0,6,8,5,7,9};
    int n=6;
    cout<<"peak element index : "<<peak_element(arr,n,0,n-1);
}