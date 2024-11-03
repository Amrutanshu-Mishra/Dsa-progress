//count the number of paths possible from start point to end point in gameboard and the no. of steps taken can be any integer form 1 to 6 both inclusive
#include<iostream>
#include<string>
using namespace std;
int count_path(int start,int end){
    if(start==end){
        return 1;
    }
    if (start>end){
        return 0;
    }
    int count=0;
    for (int i = 1; i <= 6; i++)
    {
        count+=count_path(start+i,end);
    }
    return count;
}

int main(){
    cout<<count_path(0,3);
}