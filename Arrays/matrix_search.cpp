#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int row=0;
    int col=m-1;
    int key;
    cout<<"enter the element which you wnat to search inside the array";
    cin>>key;
    while(row<n && col>=0){
        if(arr[row][col]==key){
            cout<<row<<" "<<col;
            return 0;
        }
        else if(arr[row][col]>key){
            col--;
        }
        else{
            row++;
        }
    }

}