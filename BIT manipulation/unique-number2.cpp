//write a program to find 2 unique numbers in an array where all numbers except two,are present twice
#include<iostream>
using namespace std;
int getbit(int n,int pos){
    return((n&(1<<pos))!=0);
}
int main(){
    int arr[8]={2,4,6,7,4,5,6,2};
    int xorsum=0;
    int newxor=0;
    int required_bit=0;
    int position=0;
    for(int i = 0; i < 8; i++)
    {
        xorsum=xorsum^arr[i];
    }
    for(int i=0;i<4;i++){
        required_bit=getbit(xorsum,i);
        if(required_bit==1){
            position=i;
            break;
        }
    }
    for(int i=0;i<8;i++){
        int temp=getbit(arr[i],position);
        if(temp==required_bit){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<" "<<(newxor^xorsum);

    
}