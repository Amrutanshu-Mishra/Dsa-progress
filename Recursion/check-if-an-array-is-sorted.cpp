#include<iostream>
using namespace std;
bool is_sorted(int arr[],int n){
    if (n==1)
    {
        return true;
    }
    int pre_array=is_sorted(arr+1,n-1);
    return((arr[0]<arr[1])&&pre_array);
}
int main(){
    int arr[5]={1,2,3,5,4};
    cout<<is_sorted(arr,5);

}