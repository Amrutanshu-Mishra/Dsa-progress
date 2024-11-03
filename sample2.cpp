#include<iostream>
using namespace std;

bool isPrime(int a){
    for (int i = 2; i < a; i++)
    {
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    if(isPrime(a)){
        cout<<"The given number is prime"<<endl;
    }
    else{
        cout<<"The given number is composite"<<endl;
    }
}
