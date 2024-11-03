//how many number are divisible by a or b from 1 to n 
#include<iostream>
using namespace std;
int divisible(int n,int a,int b){
    int n1=n/a;
    int n2=n/b;
    int n3=n/(a*b);
    return n1+n2-n3;
}
