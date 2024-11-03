#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int presum=sum(n-1);
    return n+presum;
}
int main(){
    cout<<sum(100);
}