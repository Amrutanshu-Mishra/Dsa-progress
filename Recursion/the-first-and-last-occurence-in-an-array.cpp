#include<iostream>
using namespace std;
int initial_occurence(int arr[],int n,int i,int num){
    if(i==n){
        return -1;
    }
    if(arr[0]==num){
        return i;
    }
    initial_occurence(arr+1,n-1,i+1,num);
}
int final_occurence(int arr,int n,int i,int num){
    if(i==n){
        return -1;
    }
    int restarray=final_occurence(arr,n,i+1,num);
    if(restarray!=-1){
        return restarray;
    } 
    if(arr[i]==num){
        return i;
    }
    return -1;

}
int main(){
    int arr[5]={1,4,3,2,2};
    cout<<initial_occurence(arr,5,0,2);
}