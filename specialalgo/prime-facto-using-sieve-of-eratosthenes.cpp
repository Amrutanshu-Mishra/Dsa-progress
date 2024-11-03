#include<iostream>
using namespace std;
int prime_facto(int n){
    int spf[100];
    for (int i = 2; i < n; i++)
    {
        spf[i]=i;//initially we will make the spf of every no as itself
    }
    for (int i = 2; i < n; i++)
    {
        if(spf[i]==i){
            for (int j = i*i; j < n; j+=i)
            {
                if (spf[j]==j)
                {
                    spf[j]=i;
                }
                
            }
        }
    }
    while (n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/2;
    }
    


    
    return 0;
}
int main(){
    prime_facto(20);
}