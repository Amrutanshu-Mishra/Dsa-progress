#include<iostream>
#include<string>
using namespace std;
int tiles(int n){
    if(n==1){
        return 1;
    }
    if (n==2)
    {
        return 2;
    }
    return tiles(n-1)+tiles(n-2);
}
int main(){
    cout<<tiles(3);
}