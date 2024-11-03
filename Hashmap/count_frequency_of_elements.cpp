#include<iostream>
#include<unordered_map>
using namespace std;
void freq(int arr[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto i:m){
        cout<<"element "<<i.first<<" frequency"<<i.second<<endl;
    }
}
int main(){
    int arr[8]={2,2,2,1,1,4,3,4};
    freq(arr,8);
}