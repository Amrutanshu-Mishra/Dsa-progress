#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=1000000;
    bool a[size];
    for(int i=0;i<size;i++){
        a[i]=false;
    }
    for(int i=0;i<n;i++){
        a[arr[i]]=true;
    }
    for(int i=0;i<n;i++){
        if(a[i]==false){
            cout<<i;
            break;
        }
    }

}