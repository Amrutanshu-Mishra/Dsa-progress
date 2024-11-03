#include<iostream>
using namespace std;
int till_n_asc(int n){
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    till_n_asc(n-1);
    cout<<n<<endl;
    return 0;
}
int main(){
    cout<<till_n_asc(5);
    return 0;
}