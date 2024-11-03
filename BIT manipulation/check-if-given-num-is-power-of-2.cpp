#include<iostream>
using namespace std;
bool power_of_2(int n){
    if((n && n&(n-1))==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<power_of_2(8);

}