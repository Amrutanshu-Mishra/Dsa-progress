#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            flag=false;
        }
    }
    if(flag==true){
        cout<<"it is a palindrome";
    }
    else{
        cout<<"it is not a palindrome";
    }


}
