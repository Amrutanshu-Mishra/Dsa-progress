#include<iostream>
#include<climits>
using namespace std;
void largest_three(int arr[],int n){
    int max1=INT16_MIN;
    int max2=INT16_MIN;
    int max3=INT16_MIN;
    for (int i = 0; i < n-2; i++)
    {
        max1=max(max1,arr[i]);
        max2=max(max2,arr[i+1]);
        max3=max(max3,arr[i+2]);
        if(max1<max2){
            int temp=max1;
            max1=max2;
            max2=temp;
        }
        if(max1<max3){
            int temp=max1;
            max1=max3;
            max3=temp;
        }
        if(max2<max3){
            int temp=max2;
            max2=max3;
            max3=temp;
        }
    }
    cout<<max1<<max2<<max3;
}
int main(){
    int arr[6] = {10, 4, 3, 50, 23, 90};
    largest_three(arr,6);
}