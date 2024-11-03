#include<iostream>
using namespace std;
int GCD(int a,int b){
    while (b>0)
    {
        int result=b;
        b=a%b;
        a=result;
    }
    return a;
    
}
int main(){
    cout<<GCD(21,7);

}