#include<iostream>
#include<unordered_map>
using namespace std;
bool subset(int arr1[],int n1,int arr2[],int n2){
    unordered_map<int,int>m;
    for(int i=0;i<n1;i++){
        m[arr1[i]]=i+1;
    }
    bool subset1=true;
    for(int i=0;i<n2;i++){
        if(m[arr2[i]]==0){
            subset1=false;
        }
    }
    return subset1;
}
int main(){
    int arr3[6] = {11, 1, 13, 21, 3, 7};
    int arr4[4]= {11, 3, 7, 1};
    bool ans=subset(arr3,6,arr4,4);
    cout<<ans;
}