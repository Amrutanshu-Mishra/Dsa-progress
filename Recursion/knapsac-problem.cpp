#include<iostream>
using namespace std;
int knapsac(int value[],int wt[],int n,int W){
    if (n==0|| W==0)
    {
        return 0;
    }
    if(wt[n-1]>W){
        return knapsac(value,wt,n-1,W);
    }
    return max(knapsac(value,wt,n-1,W-wt[n-1])+value[n-1],knapsac(value,wt,n-1,W));
}
int main(){
    int wt[3]={10,20,30};
    int value[3]={100,50,150};
    int W=50;
    cout<<knapsac(value,wt,3,W);
}