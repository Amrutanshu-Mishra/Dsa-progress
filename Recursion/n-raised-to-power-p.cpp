#include<iostream>
using namespace std;
int exp(int n,int p){
    if(p==0){
        return 1;
    }
    return(n*exp(n,p-1));

}
int main(){
    cout<<exp(5,4);

}