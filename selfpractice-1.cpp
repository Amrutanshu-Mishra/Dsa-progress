#include<iostream>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
	    int h;
	    cin>>h;
	    int moves=0;
	    int ap=1;
	    int prime[h+1];
	    for(int i=1;i<=h;i++){
	        prime[i]=0;
	    }
	    for(int i=2;i*i<=h;i++){
	        if(prime[i]==0){
	            for(int j=i*i;j<=h;j+=i){
	                prime[j]=1;
	            }
	        }
	    }
	    int maxp=0;
	    for(int i=h;i>=1;i--){
	        if(prime[i]==0){
	            maxp=i;
	            break;
	        }
	    }
	    h-=maxp;
	    moves++;
	    while(h>0){
	        h-=ap;
	        ap=ap*2;
	        moves++;
	    }
	    if(h==0){
	        cout<<moves<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
    return 0;
}