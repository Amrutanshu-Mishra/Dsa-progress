#include<iostream>
#include<string>
using namespace std;
void tower_of_hanoi(int n,string start,string helper,string destination){
    if (n==0)
    {
        return;
    }
    tower_of_hanoi(n-1,start,destination,helper);
    cout<<"move from"<<start<<"to"<<destination<<endl;
    tower_of_hanoi(n-1,helper,start,destination);
}
int main(){
    tower_of_hanoi(3,"A","B","c");
}