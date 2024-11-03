//descending order
#include<iostream>
using namespace std;
int print_till_n(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<endl;
    print_till_n(n-1);
}
int main(){
    cout<<print_till_n(100);
}