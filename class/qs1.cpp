#include<iostream>
using namespace std;
//brute force approach
void prime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            cout<<"The number entered is composite"<<endl;
            return;
        }
    }
    cout<<"the number is prime"<<endl;
    return;
}
int main(){
    int a;
    cin>>a;
    prime(a);
} 