#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of days";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the  number of visitors in "<<i+1<<"th day";
        cin>>arr[i];
    }
    int maxpre=INT16_MIN;
    bool cond1=false;
    bool cond2=false;
    for(int i=0;i<n;i++){
        maxpre=max(maxpre,arr[i]);
        if(maxpre==arr[i]){
            cond1=true;
        }
        if(i==n-1){
            cond2=true;
        }
        else{
            if(arr[i]>arr[i+1]){
                cond2=true;
            }
        }
        if(cond1==true && cond2==true){
            cout<<i+1<<"th day is a record breaking day"<<endl;
        }
        cond1=false;
        cond2=false;
        

    }
}