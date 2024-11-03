//write a program to print all the prime numbers till a given number
#include<iostream>
using namespace std;
int sieve_prime(int n){
    int arr[n];
    for (int i = 2; i < n; i++)
    {
        arr[i]=0;
    }
    for(int i=2;i<n;i++){
        if(arr[i]==0){
            for(int j=i*i;j<n;j+=i){
                arr[j]=1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            cout<<i<<" ";
        } 
    }
    return 0;
    
}
int main(){
    sieve_prime(100);
}