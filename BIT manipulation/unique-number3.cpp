//write a program to find a unique number in an array where all numbers except one,are present thrice
#include<iostream>
using namespace std;
int getbit(int n,int pos){
    return((n&(1<<pos))!=0);
}
int setbit(int n,int pos){
    return(n|(1<<pos));
}
void unique(int arr[],int n){
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            int temp=getbit(arr[j],i);
            if(temp==1){
                sum+=1;
            }
        } 
        if((sum%3)==0){
            continue;
        }
        else{
            result=setbit(result,i);
        }


    }
    cout<<result;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    unique(arr,n);
    
    

}