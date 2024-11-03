#include<iostream>
using namespace std;
void increment(int*a){
    *a=*a+1;
}
int main(){
    int a=2;
    int*aptr=&a;
    increment(aptr);
    cout<<a<<endl;
}