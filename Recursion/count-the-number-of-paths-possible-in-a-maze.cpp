#include<iostream>
#include<string>
using namespace std;
int count_path_maze(int n,int i,int j){
    
    if ((i==n)&&(j==n))
    {
        return 1;
    }
    if ((i>n)||(j>n))
    {
        return 0;
    }
    
    return count_path_maze(n,i+1,j)+count_path_maze(n,i,j+1);
}
int main(){
    cout<<count_path_maze(3,0,0);
}