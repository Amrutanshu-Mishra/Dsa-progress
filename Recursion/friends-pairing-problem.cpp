#include<iostream>
#include<string>
using namespace std;
int friends_pairing(int n){
    if(n==2){
        return 2;
    }
    if(n==1){
        return 1;
    }
    return friends_pairing(n-1)+(n-1)*friends_pairing(n-2);
}
int main(){
    cout<<friends_pairing(4);
}