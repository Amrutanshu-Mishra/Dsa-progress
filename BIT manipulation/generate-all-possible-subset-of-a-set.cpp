#include<iostream>
using namespace std;
void all_possible_subsets(char arr[],int n){
    for(int i=0;i<(i<<n);i++){
        for(int j=0;j<n;j++){
            if(i && (i<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }    
}