#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"the sorted array is .......";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    int k;
    cout<<"enter the sum which you would like to check";
    cin>>k;
    int start=0;
    int end=n-1;
    while(start<=end){
        int sum=arr[start]+arr[end];
        if(sum==k){
            cout<<start<<" "<<end<<" "<<endl;
        }
        else if(sum<k){
            start+=1;
        }
        else{
            end=end-1;
        }
        return 0;
    }
    cout<<"no two elements sum satiisfies the given property";
    return 0;
}